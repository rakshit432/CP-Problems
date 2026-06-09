#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<tuple<int,int,int>> v;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b, i});
    }

    // sort by start time
    sort(v.begin(), v.end());

    // (end_time, room_number)
    set<pair<int,int>> st;

    vector<int> room(n);
    int room_count = 0;

    for (auto [start, end, idx] : v) {

        // find first room with end >= start
        auto it = st.lower_bound({start, 0});

        if (it == st.begin()) {
            // no room available → create new
            room_count++;
            room[idx] = room_count;
            st.insert({end, room_count});
        } 
        else {
            // take previous room (largest end < start)
            --it;
            int r = it->second;
            st.erase(it);

            room[idx] = r;
            st.insert({end, r});
        }
    }

    cout << room_count << "\n";
    for (int i = 0; i < n; i++) {
        cout << room[i] << " ";
    }
}