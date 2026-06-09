#include <bits/stdc++.h>
using namespace std;

struct Fenwick {
    int n;
    vector<int> bit;

    Fenwick(int n) : n(n), bit(n + 1, 0) {}

    void update(int i, int val) {
        for (; i <= n; i += i & -i)
            bit[i] += val;
    }

    int sum(int i) {
        int s = 0;
        for (; i > 0; i -= i & -i)
            s += bit[i];
        return s;
    }

    // find smallest index such that prefix sum >= k
    int find_kth(int k) {
        int pos = 0;
        for (int i = 1 << 18; i > 0; i >>= 1) {
            if (pos + i <= n && bit[pos + i] < k) {
                k -= bit[pos + i];
                pos += i;
            }
        }
        return pos + 1;
    }
};

int main() {
    int n, k;
    cin >> n >> k;

    Fenwick fw(n);

    // initially all alive
    for (int i = 1; i <= n; i++) {
        fw.update(i, 1);
    }

    int current = 0;

    for (int remaining = n; remaining > 0; remaining--) {
        current = (current + k) % remaining;

        int idx = fw.find_kth(current + 1);
        cout << idx << " ";

        fw.update(idx, -1); // remove
    }
}