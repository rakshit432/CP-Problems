#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; 
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    long long res =  1 ;

    sort(v.begin(),v.end());

    for(int i = 0 ; i<n ; i++)
    {
      if(v[i] > res)
      {
          break;
      } 

      else if(v[i] <= res)
      {
          res += v[i];
      }

    }
    cout << res << endl;

}