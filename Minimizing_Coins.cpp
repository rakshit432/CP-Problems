#include <bits/stdc++.h>
using namespace std;

int func(int sum, int n, vector<int>& v, vector<int>& dp)
{
    if(sum == 0)
    {
        return 0;
    }

    if(sum < 0)
    {
        return 1e9;
    }

    if(dp[sum] != -1)
    {
        return dp[sum];
    }

    int cnt = 1e9;

    for(int i = 0; i < n; i++)
    {
        cnt = min(cnt, 1 + func(sum - v[i], n, v, dp));
    }

    return dp[sum] = cnt;
}

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> dp(x + 1, -1);

    int ans = func(x, n, v, dp);

    if(ans >= 1e9)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}