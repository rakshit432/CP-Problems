#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;

    vector<long long> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    long long sum = 0;
    long long max_sum = LLONG_MIN;

    for(int i = 0; i < n; i++)
    {
        sum += v[i];
        max_sum = max(max_sum, sum);
        if(sum < 0){
            sum = 0;
        }
    }

    cout << max_sum << endl;
}