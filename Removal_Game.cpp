#include <bits/stdc++.h>
using namespace std;

vector<long long> a;
vector<vector<long long>> dp;

long long solve(int l, int r)
{
    // No elements left
    if (l > r)
        return 0;

    // Already computed
    if (dp[l][r] != -1)
        return dp[l][r];

    // Only one element left
    if (l == r)
        return dp[l][r] = a[l];

    long long takeLeft =
        a[l] - solve(l + 1, r);

    long long takeRight =
        a[r] - solve(l, r - 1);

    return dp[l][r] =
        max(takeLeft, takeRight);
}

int main()
{
    int n;
    cin >> n;

    a.resize(n);

    for (auto &x : a)
        cin >> x;

    dp.assign(n, vector<long long>(n, -1));

    long long diff = solve(0, n - 1);

    long long total =
        accumulate(a.begin(), a.end(), 0LL);

    long long firstPlayer =
        (total + diff) / 2;

    cout << firstPlayer << '\n';
}