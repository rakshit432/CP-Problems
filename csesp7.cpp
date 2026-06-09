#include  <bits/stdc++.h>
using namespace std ;

int MOD = 1e9 + 7 ;

int main()
{
    int n ; 
    cin >> n ;

    int ans = 1 ;

    while(n--) {
       ans = (ans * 2) % MOD ;
    }
    
    cout << ans << endl ;
}