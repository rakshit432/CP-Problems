#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> h(n), s(n);

    for(auto &it : h)
        cin >> it;

    for(auto &it : s)
        cin >> it;

    vector<vector<int>> dp(n + 1,
                           vector<int>(x + 1, 0));

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= x; j++)
        {
            dp[i][j] = dp[i-1][j];

            if(j >= h[i-1])
            {
                dp[i][j] = max(dp[i][j],
                               s[i-1] +
                               dp[i-1][j-h[i-1]]);
            }
        }
    }

    cout << dp[n][x];
}