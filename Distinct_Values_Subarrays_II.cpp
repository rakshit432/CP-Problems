#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;

    cin >> n >> k;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_map<int,int> st;

    long long cnt = 0;

    int l = 0;
    int r = 0;

    while(r < n)
    {
        st[a[r]]++;

        
        while(st.size() > k)
        {
            st[a[l]]--;

            if(st[a[l]] == 0)
            {
                st.erase(a[l]);
            }

            l++;
        }

        cnt += (r - l + 1);

        r++;
    }

    cout << cnt << "\n";
}