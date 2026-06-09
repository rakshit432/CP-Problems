#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        long long num = stoll(n);  
        long long root = sqrt(num);
        if (root * root != num) {
            cout << -1 << endl;
        } else {
            cout << root << " " << 0 << endl;
        }
    }
    return 0;
}
