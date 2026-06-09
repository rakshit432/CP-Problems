#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    set<int> s;

    int l = 0, max_len = 0;

    for(int r = 0; r < n; r++) {
        // jab tak duplicate hai, remove from left
        while(s.count(arr[r])) {
            s.erase(arr[l]);
            l++;
        }

        s.insert(arr[r]);
        max_len = max(max_len, r - l + 1);
    }

    cout << max_len << endl;
}