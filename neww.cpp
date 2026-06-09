#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin>>t;

    while(t--)
    {
        int n,l,r ;
        cin>>n>>l>>r;

        vector<int>arr(n);
        for(auto &i:arr)
        {
            cin>>i ;
        }

        int e = r-l+1 ;

        sort(arr.begin(),arr.end());

        int sum = 0 ;

        for(int j = 0 ; j<e ; j++)
        {
            sum+=arr[j] ;
        }
        
        cout<<sum<<endl ;
    }
}