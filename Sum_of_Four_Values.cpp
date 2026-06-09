#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x ;
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
        for(int j = i + 1; j < n; j++)
        {
            int k = j + 1;
            int l = n - 1;

            while(k < l)
            {
                long long sum = a[i].first + a[j].first + a[k].first + a[l].first;

                if(sum == x)
                {
                    vector<int> ans = {a[i].second, a[j].second, a[k].second, a[l].second};
                    sort(ans.begin(), ans.end());

                    cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << ' ' << ans[3] << '\n';
                    return 0;
                }
                else if(sum < x)
                {
                    k++;
                }
                else
                {
                    l--;
                }
            }
        }
    }

    cout << "IMPOSSIBLE\n";

}