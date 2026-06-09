#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int q; cin >> q;
    while (q--) {
        long long k; cin >> k;
 
        long long d = 1, cnt = 9, start = 1;
 
        while (k > d * cnt) {
            k -= d * cnt;
            d++;
            cnt *= 10;
            start *= 10;
        }
 
        long long num = start + (k - 1) / d;
        cout << to_string(num)[(k - 1) % d] << "\n";
    }
}