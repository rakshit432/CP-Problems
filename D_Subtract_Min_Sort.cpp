#include<bits/stdc++.h>
using namespace std ;

int main()
{
int t ;
cin>>t ;

while(t--)
{
    int n ;
    cin>>n ;

    vector<int>a(n);

    for(auto &i:a)
    {
        cin>>i ;
    }


    for(int i = 0 ;i<a.size()-1 ; i++)
    {
       int mini = min(a[i],a[i+1]);
       a[i]-=mini ;
       a[i+1]-=mini ;
    }

    if(is_sorted(a.begin(),a.end()))cout<<"YES"<<endl ;
    else cout<<"NO"<<endl ;
}
}