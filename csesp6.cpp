#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define sp ' '
#define ll long long

void solve() {
    int n;
    cin >> n;

    ll S = (n * 1LL * (n + 1)) / 2;

    if (S % 2) {
        cout << "NO" << nl;
        return;
    }

    S /= 2; // target sum

    vector<int> v1, v2;

    for (int i = n; i >= 1; i--) {
        if (i <= S) {
            v1.push_back(i);
            S -= i;
        } else {
            v2.push_back(i);
        }
    }

    cout << "YES" << nl;

    cout << v1.size() << nl;
    for (auto x : v1) cout << x << sp;
    cout << nl;

    cout << v2.size() << nl;
    for (auto x : v2) cout << x << sp;
    cout << nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}