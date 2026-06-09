#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long y, x;
        cin >> y >> x;

        long long layer = max(x, y);
        long long ans;

        if(layer % 2 == 0) {
            if(y == layer) {
                ans = layer * layer - x + 1;
            } else {
                ans = (layer - 1) * (layer - 1) + y;
            }
        } else {
            if(x == layer) {
                ans = layer * layer - y + 1;
            } else {
                ans = (layer - 1) * (layer - 1) + x;
            }
        }

        cout << ans << "\n";
    }
}