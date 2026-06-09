#include <iostream>
#include <vector>
using namespace std;

int calculate_min_operations(vector<int>& arr) {
    int n = arr.size();
    int zeros_to_right = 0; // Count of zeros to the right of the current position
    int cost = 0;           // Total cost

    // First, count the total number of zeros in the array
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) {
            zeros_to_right++;
        }
    }

    // Now, calculate the cost by traversing the array
    int ones_to_left = 0; // Count of ones to the left of the current position
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 1) {
            // For every 1, we need to teleport all zeros to the right of it through this 1
            cost += zeros_to_right;
            ones_to_left++;
        } else {
            // For every 0, we reduce the number of zeros to the right
            zeros_to_right--;
        }
    }

    return cost;
}

int main() {
     
     int t ;
     cin>>t ;
     while(t--)
     {
        string s ;
        cin>>s ;

        cout << calculate_min_operations << endl; 
     }

    return 0;
}
