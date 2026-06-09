    #include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    cin>> n;
    
    vector<vector<int>> v(n,vector<int>(n));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            v[i][j] = i^j ;
        }
    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<< v[i][j] << " " ;
        }
        cout<< endl ;
    }

}