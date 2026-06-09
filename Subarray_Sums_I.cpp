#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,x ;
  cin>>n>>x;

  vector<int>a(n);

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  long long sum = 0 ;
  int cnt = 0 ;
  
  unordered_map<long long,int> mpp;
  mpp[0] = 1;
  for(int i = 0 ; i<n ; i++)
  {
    sum+=a[i];
    
    if(mpp.find(sum-x) != mpp.end())
    {
        cnt+=mpp[sum-x] ;
    }
    
    mpp[sum]++ ;

  }

    cout << cnt << "\n";

  
}