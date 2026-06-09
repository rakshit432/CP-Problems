#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    unordered_map<int, int> freq;
    freq.reserve(n);   // optimization

    int l = 0;
    long long cnt = 0;

    for (int r = 0; r < n; r++) {
        freq[arr[r]]++;

        while (freq[arr[r]] > 1) {
            freq[arr[l]]--;
            l++;
        }

        cnt += (r - l + 1);
    }

    cout << cnt << endl;
}