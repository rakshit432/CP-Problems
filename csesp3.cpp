#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n ;
    vector<int>a(n);

    for(auto &i:a)
    {
        cin>>i ;
    }

    int maxi = a[0] ;
    long long ans = 0 ;

    for(int i = 1 ; i<n ; i++)
    {
        if(a[i] < maxi)
        {
            ans+=(maxi-a[i]) ;
        }
        maxi = max(maxi , a[i]) ;
    }
    cout << ans << endl ;
    return 0 ;

}