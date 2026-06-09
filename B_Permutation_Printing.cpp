#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin>>t;
    while (t--)
    {
        int n ;
        cin>>n;
        
        vector<int>arr1;
        
        int m ;

        if(n%2!=0)
        {
            m = n-1 ;
        }

        else{
            m=n ;
        }

        for(int i = 1 ; i<=n ; i++)
        {
            if(i%2==0)
            {
                arr1.push_back(m-i+2);
            }
            else{
                arr1.push_back(i) ;
            }
        }
        
        for(auto &i:arr1)
        {
            cout<<i<<" " ;
        }

        cout<<endl ;
        
    }
    
}