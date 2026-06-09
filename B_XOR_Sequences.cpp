#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin>>t;

    while(t--)
    {
        long long a,b ;
        cin>>a>>b ;

        long long k = a^b ;
        int c = 0 ;

        while(k%2==0)
        {
            c++ ;
            k/=2 ;
        }
        cout<<(long long)pow(2,c)<<endl ;
    }
}