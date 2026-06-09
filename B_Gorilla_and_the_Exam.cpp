#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin>>t ;
    while(t--)
    {
        int n , k;
        cin>>n>>k ;

        vector<int>a(n);

        for(int i = 0 ; i<n ; i++)
        {
            cin>>a[i] ;
        }
        
        sort(a.begin(),a.end());
        
        int c = 1 ;

        for(int i = 0 ; i<n-1 ; i++)
        {
          if(a[i+1] == a[i])
          {
             c++ ;
          }
          
         else break ;
        }
         
         int cnt = 1 ;
          
        for(int i = c+k-1 ; i<n-1 ; i++)
        {
            if(a[i]!=a[i+1])cnt++ ;
        }

        cout<<cnt<<endl ;
    }
}