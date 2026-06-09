#include<bits/stdc++.h>
using namespace std;

int func(int n,string s,vector<int>&dp)
{
   if(n == 0)return 0 ;
   else if(n<0)return 1e9 ;
   
   if(dp[n]!=-1)return dp[n];
   int cnt = 1e9 ;
   for(int i = 0 ; i<(int)s.size() ; i++)
   {  
      int x = s[i]-'0';
              if(x == 0) continue;

      string snew = to_string(n-x);
      int newx  = n-x ;
      cnt = min(cnt,1+func(newx,snew,dp));
   }

   return dp[n] = cnt;
}

int main()
{
    int n ; 
    cin>>n;

    string s = to_string(n);
    vector<int>dp(n+1,-1);
    cout<<func(n,s,dp);
    
}