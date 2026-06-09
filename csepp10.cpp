#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'A']++;

    int odd = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2) odd++;
    }

    if (odd > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string left = "", middle = "";

    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) {
            middle = string(freq[i], char(i + 'A'));
        }
        else left += string(freq[i] / 2, char(i + 'A'));
    }

    string right = left;
    reverse(right.begin(), right.end());

    cout << left + middle + right << endl;
}