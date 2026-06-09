#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool has_double_zero = false;
        int count_one = 0;

        for(int i = 0; i < n; i++)
        {
            if(a[i] == 1) count_one++;
            if(i < n - 1 && a[i] == 0 && a[i + 1] == 0)
            {
                has_double_zero = true;
            }
        }

        if(has_double_zero || count_one == 0 || count_one == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
