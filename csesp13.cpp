#include <bits/stdc++.h>
using namespace std;

void func(vector<int> &freq, string st , int n , vector<string> &ans) {
   
    if ((int)st.size() == n) {
        ans.push_back(st);
        return;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            freq[i]--;
            func(freq, st + char(i + 'a'), n, ans);
            freq[i]++;
        }
    }
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    
    vector<int> freq(26,0);

    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
    }

    vector<string>ans ;
    func(freq, "", n , ans);
    cout << ans.size() << "\n";
    for(int i = 0; i < (int)ans.size(); i++) {
        cout << ans[i] << "\n";
    }
}