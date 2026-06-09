#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin>>t ;

    while (t--)
    {
        int n ;
        cin>>n ;
        vector<int>arr(n);

        for(auto &i:arr)
        {
            cin>>i ;
        }

        int mn = *min_element(arr.begin(),arr.end());

        int mx = *max_element(arr.begin(),arr.end());

        if(mn == mx) 
        {
            cout<<"NO"<<endl;
            continue;
        }

        else{
            cout<<"YES"<<endl;

            for(int i = 0 ; i<n ; i++)
            {
                if(arr[i]==mx)
                cout<<"1"<<" " ;

                else cout<<"2"<<" " ;
            }
            cout<<endl ;
        }
    }
}