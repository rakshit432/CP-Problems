#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,c,d ;
        cin>>n>>c>>d;

        vector<int>a(n*n) ;

        for(int i = 0 ; i<n*n ; i++)
        {
           cin>>a[i] ;
        }
        
        sort(a.begin(),a.end()) ;
        

        vector<int>b ;
                
        for(int i = 0 ;i<n ; i++)
        {
           int s = a[0]+ i*c ;
           for(int j = 0 ;j<n; j++)
           {
              b.push_back(s+j*d) ;
           }
        }

        sort(b.begin(),b.end()) ;

        if(a==b)
        {
            cout<<"YES"<<endl ;
        }

        else cout<<"NO"<<endl ;

    }
}