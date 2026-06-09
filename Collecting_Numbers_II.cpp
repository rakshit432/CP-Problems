#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n + 1), pos(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        pos[arr[i]] = i;
    }

    int rounds = 1;

    // initial count
    for (int i = 1; i < n; i++) {
        if (pos[i] > pos[i + 1]) rounds++;
    }

    while (m--) {
        int a, b;
        cin >> a >> b;

        int u = arr[a];
        int v = arr[b];

      
        set<int> affected = {u - 1, u, v - 1, v};

        // remove old
        for (int x : affected) {
            if (x >= 1 && x < n) {
                if (pos[x] > pos[x + 1]) rounds--;
            }
        }

        // swap
        swap(arr[a], arr[b]);
        swap(pos[u], pos[v]);

        // add new
        for (int x : affected) {
            if (x >= 1 && x < n) {
                if (pos[x] > pos[x + 1]) rounds++;
            }
        }

        cout << rounds << "\n";
    }

    return 0;
}