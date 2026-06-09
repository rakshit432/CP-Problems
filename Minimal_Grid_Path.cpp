#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> g(n);
    for (auto &s : g) cin >> s;

    string ans;
    ans += g[0][0];

    vector<pair<int,int>> cur = {{0, 0}};
    vector<vector<bool>> vis(n, vector<bool>(n, false));

    for (int step = 1; step <= 2 * n - 2; step++) {

        char best = 'Z' + 1;

        for (auto &[i, j] : cur) {
            if (i + 1 < n) best = min(best, g[i + 1][j]);
            if (j + 1 < n) best = min(best, g[i][j + 1]);
        }

        ans += best;

        vector<pair<int,int>> nxt;

        for (auto &[i, j] : cur) {

            if (i + 1 < n && g[i + 1][j] == best &&
                !vis[i + 1][j]) {

                vis[i + 1][j] = true;
                nxt.push_back({i + 1, j});
            }

            if (j + 1 < n && g[i][j + 1] == best &&
                !vis[i][j + 1]) {

                vis[i][j + 1] = true;
                nxt.push_back({i, j + 1});
            }
        }

        for (auto &[i, j] : nxt)
            vis[i][j] = false;

        cur = move(nxt);
    }

    cout << ans << '\n';
}