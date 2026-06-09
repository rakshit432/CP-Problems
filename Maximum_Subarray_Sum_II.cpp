#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    vector<long long> arr(n + 1);
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<long long> prefix(n + 1, 0);

    for(int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    multiset<long long> ms;
    long long ans = LLONG_MIN;

    for(int i = a; i <= n; i++)
    {
        ms.insert(prefix[i - a]);

        if(i > b)
        {
            ms.erase(ms.find(prefix[i - b - 1]));
        }

        ans = max(ans, prefix[i] - *ms.begin());
    }

    cout << ans << endl;
}