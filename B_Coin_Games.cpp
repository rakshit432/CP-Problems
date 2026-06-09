#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin>>t ;

    while(t--)
    {
        int n;
        cin>>n ;

        string s ;
        cin>>s ;
         
         int u = 0 ;

        for(auto &i:s)
        {
          if(i=='U')u++;
        }
        
        
        if(u%2!=0)
        {
         cout<<"YES"<<endl ;
        }

        else cout<<"NO"<<endl ;
    }
}
