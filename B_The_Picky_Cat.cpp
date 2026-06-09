#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            a[i] = abs(a[i]); // make all values positive
        }

        vector<int> b = a;
        sort(b.begin(), b.end());

        int median_index = n / 2; // 0-based index of the median in a sorted array

        if (a[0] <= b[median_index])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
