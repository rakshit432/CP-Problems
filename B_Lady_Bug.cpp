#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin>>t ;
    while(t--)
    {
        int n ;
        cin>>n;
        
        string a,b ;
        cin>>a>>b ;
      int cnt1 = 0 , cnt2 = 0 ;

      for(int i = 0 ; i<n ; i++)
      {
         if(i%2 == 0)
         {
            if(a[i]=='0')cnt2++ ;
            if(b[i]=='0')cnt1++ ;
         }

         else{
            if(a[i]=='0')cnt1++ ;
            if(b[i]=='0')cnt2++ ;
         }
        }

        cout << (cnt2 >= (n+1) / 2 && cnt1 >= n / 2 ? "YES" : "NO") << '\n';
      }
    }
