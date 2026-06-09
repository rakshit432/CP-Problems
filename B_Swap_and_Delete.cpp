#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
         
         int one=0,zero=0;

        for(int i = 0 ; i<s.size(); i++)
        {
            if(s[i]=='1')one++;
            else zero++ ;
        }

        int c = 0;

        if(s.size()==1)
        {
            cout<<"1"<<endl;
            continue;
        }

        for(int i = 0 ; i<s.size() ; i++)
        {
            if(s[i]=='1'&& zero>0)
            {
               c++ ;
               zero-- ;
            }

            else if(s[i]=='0' && one>0)
            {
               c++ ;
               one-- ;
            }
            
            else break ;
        }
        
        int size = s.size() ;
        cout<<size-c<<endl ;
    }
}