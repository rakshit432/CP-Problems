#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;  // Input string as a whole instead of using a vector

        vector<char> snew;
        int bs = 0, bl = 0;

        int n = s.size();
        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == 'b') {
                bs++;  // Count lowercase 'b'
            } 
            else if(s[i] == 'B') {
                bl++;  // Count uppercase 'B'
            }
            // If it's a lowercase letter (not 'b') and there are 'b's to remove
            else if(islower(s[i]) && s[i] != 'b') {
                if(bs > 0) 
                    bs--;  // Remove one 'b' if any 'b' are counted
                else 
                    snew.push_back(s[i]);  // Otherwise keep the character
            }
            // If it's an uppercase letter (not 'B') and there are 'B's to remove
            else if(isupper(s[i]) && s[i] != 'B') {
                if(bl > 0) 
                    bl--;  // Remove one 'B' if any 'B' are counted
                else 
                    snew.push_back(s[i]);  // Otherwise keep the character
            }
        }

        reverse(snew.begin(), snew.end());  // Reverse the resulting vector

        // Output the resulting string
        for(auto &i : snew) {
            cout << i;
        }

        cout << endl;  // Newline after each test case
    }

    return 0;
}
