#include <bits/stdc++.h>
using namespace std;

long long func(vector<long long>& v, int n, long long total, int ind, long long sum)
{
    if (ind == n)
    {
        return llabs(total - 2 * sum);
    }

    long long take = func(v, n, total, ind + 1, sum + v[ind]);
    long long nottake = func(v, n, total, ind + 1, sum);

    return min(take, nottake);
}

int main()
{
    int n;
    cin >> n;

    vector<long long> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }

    long long total = accumulate(v.begin(), v.end(), 0LL);

    cout << func(v, n, total, 0, 0) << endl;
}