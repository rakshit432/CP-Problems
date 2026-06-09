#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<long long> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<long long,long long> mpp;

    long long sum = 0;
    long long cnt = 0;

    mpp[0] = 1;

    for(int i = 0; i < n; i++)
    {
        sum += a[i];

        if(mpp.find(sum - x) != mpp.end())
        {
            cnt += mpp[sum - x];
        }

        mpp[sum]++;
    }

    cout << cnt << "\n";
}