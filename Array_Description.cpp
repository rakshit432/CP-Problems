#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    static const int MOD = 1e9 + 7;

    int func(int ind, int prev,
             vector<int>& nums,
             vector<vector<int>>& dp,
             int m) {

        // complete valid array formed
        if(ind == nums.size()) {
            return 1;
        }

        // memoized
        if(dp[ind][prev] != -1) {
            return dp[ind][prev];
        }

        long long ways = 0;

        // current value fixed
        if(nums[ind] != 0) {

            int curr = nums[ind];

            // first index OR valid adjacent difference
            if(ind == 0 || abs(curr - prev) <= 1) {

                ways = func(ind + 1,
                            curr,
                            nums,
                            dp,
                            m);
            }
        }

        // current value unknown
        else {

            // only prev-1, prev, prev+1 possible
            int start = max(1, prev - 1);
            int end = min(m, prev + 1);

            // first index -> can choose anything
            if(ind == 0) {

                start = 1;
                end = m;
            }

            for(int val = start; val <= end; val++) {

                ways = (ways +
                       func(ind + 1,
                            val,
                            nums,
                            dp,
                            m)) % MOD;
            }
        }

        return dp[ind][prev] = ways;
    }

    int countArrays(vector<int>& nums, int m) {

        int n = nums.size();

        vector<vector<int>> dp(n,
                               vector<int>(m + 1, -1));

        return func(0, 0, nums, dp, m);
    }
};

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;

    cout << sol.countArrays(nums, m);

    return 0;
}