#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x ;
    cin>>n>>x;

    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    vector<pair<int,int>> vp(n);
    for(int i=0;i<n;i++)
    {
        vp[i] = {v[i],i};
    }
    
    sort(vp.begin(),vp.end());

    int l = 0 , r = n-1 ;

    while(l<r)
    {
        int sum = vp[l].first + vp[r].first ;
        if(sum == x)
        {
            cout<<vp[r].second+1<<" "<<vp[l].second+1<<endl;
            return 0 ;
        }

        else if(sum<x){
            l++;
        }
        else{
            r--;
        }
    }

    cout<<"IMPOSSIBLE"<<endl;
}