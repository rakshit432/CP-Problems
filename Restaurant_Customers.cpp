#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>> events;

    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        events.push_back({a, +1}); // arrival
        events.push_back({b, -1}); // leaving
    }

    sort(events.begin(), events.end(), [](auto &a, auto &b) {
        if(a.first == b.first)
            return a.second < b.second; // leaving (-1) first
        return a.first < b.first;
    });

    int curr = 0, maxi = 0;

    for(auto &e : events)
    {
        curr += e.second;
        maxi = max(maxi, curr);
    }

    cout << maxi << endl;
}