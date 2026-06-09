#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        int x, y, p, q;
        cin >> x >> y >> p >> q;

        int a = abs(p - 1) + abs(q - 1);
        int b = abs(p - 1) + abs(q - y);
        int c = abs(p - x) + abs(q - 1);
        int d = abs(p - x) + abs(q - y);

        int res = max({a, b, c, d});

        cout << res + 1 << endl;
    }

    return 0;
}