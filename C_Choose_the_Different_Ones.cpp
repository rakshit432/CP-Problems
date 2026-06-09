#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin>>t ;

    while(t--)
    {
        int n,m,k ;

        cin>>n>>m>>k ;

        vector<int>a(n),b(m) ;
        int c1 = 0 , c2 = 0 ;

        for(auto &i:a)
        {   
            cin>>i ;
        }
        
        for(auto &i:b)
        {   
           cin>>i ;
        }
        
        set<int>a1,b1 ;

        a1 = set<int>(a.begin(),a.end()) ;
        b1 = set<int>(b.begin(),b.end()) ;
       

        for(auto &i:a1)
        {
            if(i>=1 && i<=k)
            {
                c1++ ;
            }
        }

        for(auto &i:b1)
        {
            if(i>=1 && i<=k)
            {
                c2++ ;
            }
        }
        
        if(c1>k/2 || c2>k/2 || c1+c2 != k)
        {
            cout<<"NO"<<endl ;
        }

        else cout<<"YES"<<endl ;
    
    }
}