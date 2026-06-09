#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    multiset<int> tickets;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        tickets.insert(x);
    }

    for(int i = 0; i < m; i++)
    {
        int ele;
        cin >> ele;

        // 👇 this line replaces your func()
        auto it = tickets.upper_bound(ele);

        if(it == tickets.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            --it;  // same as "rightmost ≤ ele"
            cout << *it << endl;
            tickets.erase(it);
        }
    }
}