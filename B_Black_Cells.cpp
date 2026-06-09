#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for(auto &i : a)
        {
            cin >> i;
        }

        unordered_map<int, int> mpp;
        
        if(n==1) 
        {
            cout<<"1"<<endl;
            continue;
        }

        for(int i = 0; i < n - 1; i++)
        {
            int diff = a[i + 1] - a[i];
            mpp[diff]++;
        }
        
        int maxi = INT_MAX; 
        int mfreq = 0; 

        for(auto &i : mpp)
        {   
            if(i.second > mfreq)
            {
                mfreq = i.second;
                maxi = i.first;
            }
            else if(i.second == mfreq && i.first < maxi)
            {
                maxi = i.first;
            }
        }
        
        cout << maxi << endl;
    }
}
