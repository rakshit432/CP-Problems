#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; 
    cin>>n;
    vector<pair<int,int>> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(),v.end(),[](auto &a,auto &b){
        return a.second < b.second ;
    });
    
    n = v.size();

    int cnt = 1 ;
    int last = v[0].second ; 

    for(int i=1;i<n;i++)
    {
        if(v[i].first >= last)
        {
            cnt++;
            last = v[i].second ;
        }
    }

    cout << cnt << endl;
}