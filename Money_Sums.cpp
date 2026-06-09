#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(auto &x : a)
        cin >> x;

    int mx_sum = accumulate(a.begin(), a.end(), 0);

    vector<vector<bool>> dp(n + 1, vector<bool>(mx_sum + 1, false));

    dp[n][0] = true;

    for(int i = n - 1; i >= 0; i--)
    {
        for(int s = 0; s <= mx_sum; s++)
        {
            dp[i][s] = dp[i + 1][s];

            if(s >= a[i])
                dp[i][s] = dp[i][s] || dp[i + 1][s - a[i]];
        }
    }

    vector<int> ans;

    for(int s = 1; s <= mx_sum; s++)
    {
        if(dp[0][s])
            ans.push_back(s);
    }

    cout << ans.size() << "\n";

    for(int x : ans)
        cout << x << " ";

    cout << "\n";

    return 0;
}