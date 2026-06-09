#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (auto &i : a) {
            cin >> i;
        }

        int c = 0; 
        int ans = 0; 
       
       sort(a.begin(),a.end()) ;
        for (int i = 0; i < n; i++)
          {
            int diffProduct = (a[i] - c) * (n - i);
            if (diffProduct < k) {
                ans += diffProduct;
                c = a[i];
            } 
            else {
                ans = k;
                break;
            }
          }
        cout << ans << endl;
      }
    return 0;
   }
