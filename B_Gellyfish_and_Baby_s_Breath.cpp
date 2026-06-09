#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n), q(n);

        for (auto &i : p) cin >> i;
        for (auto &i : q) cin >> i;

        vector<int> power_p(n), power_q(n);
        for (int i = 0; i < n; i++) {
            power_p[i] = (1 << p[i]);
            power_q[i] = (1 << q[i]);
        }

        vector<int> temp;
        for (int i = 0; i < n; i++) {
            int maxi = INT_MIN;
            for (int j = 0; j <= i; j++) {
                maxi = max(maxi, power_p[j] + power_q[i - j]);
            }
            temp.push_back(maxi);  
        }

        for (auto &i : temp) cout << i << " ";
        cout << endl;
    }

    return 0;
}
