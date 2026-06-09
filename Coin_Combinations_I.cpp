#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long func(int x, int n, vector<int>& a, vector<long long>& dp)
{
    if(x == 0) return 1;

    if(x < 0) return 0;

    if(dp[x] != -1) return dp[x];

    long long cnt = 0;

    for(int i = 0; i < n; i++)
    {
        cnt = (cnt + func(x - a[i], n, a, dp)) % MOD;
    }

    return dp[x] = cnt;
}

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n);

    for(auto &it : a)
    {
        cin >> it;
    }

    vector<long long> dp(x + 1, -1);

    cout << func(x, n, a, dp);
}