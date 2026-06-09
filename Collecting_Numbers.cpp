#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n), pos(n + 1);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        pos[arr[i]] = i;
    }

    int cnt = 1;

    for(int i = 2; i <= n; i++){
        if(pos[i] < pos[i - 1]){
            cnt++;
        }
    }

    cout << cnt << endl;
}