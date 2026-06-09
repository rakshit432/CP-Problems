#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin>>t;

    while(t--)
    {
        int n ;
        cin>>n;

        vector<int>a(n) ;
         
         for(auto&i:a)
         {
            cin>>i;
         }
        
        bool flag = true ;
        for(int i = 1 ; i<n-1 ; i++)
        {   

            int x = min(a[i-1],a[i+1]);
            
            if(a[i]-2*x <0 ||a[i-1]-x<0 || a[i+1]<0)
            {
                flag = false ;
                break ;
            }

            a[i-1]-=x;
            a[i]-=2*x;
            a[i+1]-=x;

        }

        if(flag)cout<<"YES"<<endl ;
        else cout<<"NO"<<endl ;
    }
}