#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; 
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long rem = 0;
    unordered_map<long long,int> mpp;
    mpp[0] = 1;
    long long cnt = 0;
    long long sum = 0;

    for(int i = 0; i < n; i++)
    {
       sum+=a[i];
       int rem = (sum%n + n) % n;

       if(mpp.find(rem) != mpp.end())
       {
           cnt+=mpp[rem] ;
       }
        mpp[rem]++ ;
    }

    cout << cnt << endl;

}