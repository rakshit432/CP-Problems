#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin>>t;

    while(t--)
    {
        int n ;
        cin>>n ;

        vector<int>a(n) ;

        for(auto &i:a)
        {
            cin>>i ;
        }

        int cnt = 0;
        long long sum=0;
        int maxi = 0;
        
        for(int i = 0;i<n ; i++)
        {    
            sum+=a[i] ;
            maxi = max(maxi,a[i]) ;
            if(sum-maxi == maxi)
             {
               cnt++;
             }
        }

        cout<<cnt<<endl ;
        
     }
}