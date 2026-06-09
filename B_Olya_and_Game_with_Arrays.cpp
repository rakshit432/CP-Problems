#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<vector<long long int>> arr(n); 
        long long int mini = LLONG_MAX; // Use LLONG_MAX for long long int

        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;
            arr[i].resize(m); 

            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
                if (arr[i][j] < mini) {
                    mini = arr[i][j];
                }
            }
            sort(arr[i].begin(), arr[i].end());
        }

        vector<long long int> temp;

        for (int i = 0; i < n; i++) {
            if (arr[i].size() == 1) {
                temp.push_back(arr[i][0]);
            } else {
                temp.push_back(arr[i][1]);
            }
        }

        long long int sum = accumulate(temp.begin(), temp.end(), 0LL); // Use 0LL for long long sum
        long long int min_temp = *min_element(temp.begin(), temp.end()); // Find the minimum in temp

        long long ans = mini + sum - min_temp;
        cout << ans << endl; // Output the result
    }
}
