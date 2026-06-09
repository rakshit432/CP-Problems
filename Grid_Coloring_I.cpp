#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ;
    cin>>n>>m;

    vector<vector<char>> grid(n , vector<char>(m));

    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<m ; j++)
        {
            cin>>grid[i][j];
        }
    }
    
    vector<char> colors = {'A','B','C','D'}; // FIX: use vector instead of unordered_set

    vector<vector<char>> result(n , vector<char>(m));

    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<m ; j++)
        {
            unordered_set<char> used_colors; 
            // FIX: moved inside inner loop → reset for every cell

            if(i-1>=0)
            {
                used_colors.insert(result[i-1][j]); 
                // FIX: use result instead of grid (we are building new grid)
            }

            if(j-1>=0)
            {
                used_colors.insert(result[i][j-1]); 
                // FIX: use result instead of grid
            }

            used_colors.insert(grid[i][j]);

            bool found = false; // FIX: local flag per cell

            for(char color : colors)
            {
                if(used_colors.find(color) == used_colors.end())
                {
                    result[i][j] = color;
                    found = true;
                    break; // FIX: stop after assigning
                }
            }

            if(!found) // FIX: if no color works → immediately impossible
            {
                cout<<"IMPOSSIBLE\n";
                return 0;
            }
        }
    }

    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<m ; j++)
        {
            cout<<result[i][j];
        }
        cout<<"\n";
    }
}