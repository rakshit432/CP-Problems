#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;


long long func(int n, vector<long long>& dp)
{
    if(n == 0) return 1;

    if(dp[n] != -1) return dp[n];

    long long cnt = 0;

    for(int i = 1; i <= 6; i++)
    {
        if(i <= n)
        {
            cnt = (cnt + func(n - i, dp)) % MOD;
        }
    }

    return dp[n] = cnt;
}

int main()
{
    int n;
    cin >> n;

    vector<long long> dp(n + 1, -1);

    cout << func(n, dp) << endl;
}