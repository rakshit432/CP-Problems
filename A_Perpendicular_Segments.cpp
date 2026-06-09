#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin>>t ;

    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;

        int mini = min(x,y);

        cout<<"0"<<" "<<"0"<<" "<<mini<<" "<<mini<<endl;
        cout<<"0"<<" "<<mini<<" "<<mini<<" "<<"0" <<endl;
    }
}