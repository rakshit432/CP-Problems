#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , k;
    cin >> n >> k;
    
    vector<pair<long long int,long long int>> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end(),[&](pair<long long int,long long int> &a, pair<long long int,long long int> &b){
        
        if(a.second == b.second)
        {
            return a.first < b.first ;
        }
        return a.second < b.second ;
    });

    long long int cnt = 0;

    multiset<long long int> s ;
    for(int i = 0; i < k; i++)
    {
        s.insert(0);
    }
    
    for(int i = 0; i < n; i++)
    {
      auto it = s.upper_bound(a[i].first);
      if(it == s.begin())
      {
          continue;
      }
      it-- ;
      s.erase(it);
      s.insert(a[i].second);
      cnt++ ;   
    }

    cout << cnt << endl;
}