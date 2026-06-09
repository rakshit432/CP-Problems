#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n);

    for(auto &it : a)
    {
        cin >> it;
    }

    vector<long long> dp(x + 1, 0);

    dp[0] = 1;

    for(int coin : a)
    {
        for(int sum = coin; sum <= x; sum++)
        {
            dp[sum] =
            (dp[sum] + dp[sum - coin]) % MOD;
        }
    }

    cout << dp[x];
}