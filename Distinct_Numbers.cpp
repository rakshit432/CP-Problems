#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; 
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    int cnt = 0 ;
    int ele = -1 ;
    sort(v.begin(),v.end());
    for(int i = 0 ; i<n ; i++)
    {
        if(ele != v[i])
        {
            ele = v[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;
}