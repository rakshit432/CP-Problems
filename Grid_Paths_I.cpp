 #include <bits/stdc++.h>
 using namespace std ;

 int mod = 1e9+7 ;

 int func(int i,int j,int n ,vector<vector<char>>&grid , vector<vector<int>>&dp)
 {
    
    if(i == n-1 && j == n-1 )return 1 ;
    
    if(dp[i][j] != -1)return dp[i][j];
    int cnt = 0 ;
    if(i+1 <n && grid[i+1][j] != '*')
    cnt+=((func(i+1,j,n,grid,dp))%mod);
    if(j+1 < n && grid[i][j+1] != '*')
    cnt+=((func(i,j+1,n,grid,dp))%mod);

    return dp[i][j] = cnt%mod;

 }

 int main()
 {
    int n ;
    cin>>n;

    vector<vector<char>>grid(n,vector<char>(n));
    for(auto &i:grid)
    {
        for(auto &j:i)
        {
            cin>>j;
        }
    }
        vector<vector<int>>dp(n,vector<int>(n,-1));

    if(grid[0][0] == '*' || grid[n-1][n-1] =='*')cout<<0 ;

   else  cout<<func(0,0,n,grid,dp);

 }