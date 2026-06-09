#include  <bits/stdc++.h>
using namespace std ;   


int main()
{
    int n ;
    cin >> n ;

    int ans = 0;   
    
    int st = 5 ; 
    while(st <= n )
    {
        ans+=(n/st) ;
        st*=5 ;
    }
    cout << ans << endl ;   
}