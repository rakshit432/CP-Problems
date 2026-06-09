#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& machines, long long t, long long mid)
{
    long long cnt_prod = 0;

    for (int i = 0; i < machines.size(); i++)
    {
        cnt_prod += mid / machines[i];

        // optional optimization
        if (cnt_prod >= t) return true;
    }

    return cnt_prod >= t;
}

int main()
{
    int n;
    long long t;

    cin >> n >> t;

    vector<int> machines(n);

    for (int i = 0; i < n; i++)
    {
        cin >> machines[i];
    }

    long long low = 1;

    long long high =
        1LL * (*min_element(machines.begin(), machines.end())) * t;

    long long ans = high;

    while (low <= high)
    {
        long long mid = low + (high - low) / 2;

        if (isPossible(machines, t, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << ans << "\n";
}