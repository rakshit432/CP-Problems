#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<pair<long long,int>> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1; 
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = n - 1;

        while(j < k)
        {
            long long sum = a[i].first + a[j].first + a[k].first;

            if(sum == x)
            {
                vector<int> ans = {a[i].second, a[j].second, a[k].second};
                sort(ans.begin(), ans.end());

                cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << '\n';
                return 0;
            }
            else if(sum < x)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
}