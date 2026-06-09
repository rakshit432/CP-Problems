#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        long long total_cells = 1LL * i * i;

        long long tot_options = (total_cells * (total_cells - 1)) / 2;
        long long exclude_options = 4LL * (i - 1) * (i - 2);

        cout << tot_options - exclude_options << endl;
    }
}