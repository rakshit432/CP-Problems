#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> v(n);
    for(auto &i : v) cin >> i;

    sort(v.begin(), v.end());

    long long median = v[n/2];

    long long ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans += abs(v[i] - median);
    }

    cout << ans << endl;
}