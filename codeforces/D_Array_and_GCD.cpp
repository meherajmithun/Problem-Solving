#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>

using namespace std;

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to check if an array is ideal
bool isIdeal(const vector<int>& arr) {
    if (arr.size() < 2) {
        return true; // Condition is automatically satisfied for less than 2 elements
    }
    for (int x : arr) {
        if (x < 2) return false;
    }
    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (gcd(arr[i], arr[j]) != 1) {
                return false;
            }
        }
    }
    return true;
}

// Function to check if an array is beautiful
bool isBeautiful(const vector<int>& arr) {
    if (isIdeal(arr)) return true;

    vector<int> temp_arr = arr;
    for (int i = 0; i < (1 << arr.size()); ++i) {
        vector<int> sub_arr;
        for (size_t j = 0; j < arr.size(); ++j) {
            if ((i >> j) & 1) {
                sub_arr.push_back(arr[j]);
            }
        }
        if (sub_arr.empty()) continue;
        
        vector<int> current_sub_arr = sub_arr;
        
        // Try to make the sub_array ideal
        bool possible = true;
        for(int k = 0; k < (1 << (current_sub_arr.size() * 2)); ++k){
            vector<int> modified_arr = current_sub_arr;
            int cost = 0;
            for(int bit_index = 0; bit_index < current_sub_arr.size(); ++bit_index){
                if((k >> (bit_index * 2)) & 1){
                    modified_arr[bit_index]++;
                }
                if((k >> (bit_index * 2 + 1)) & 1){
                    modified_arr[bit_index]--;
                }
            }
            if(isIdeal(modified_arr)){
                return true;
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int min_remove = n; // Initialize with the maximum possible removal count
        for (int i = 0; i < (1 << n); ++i) {
            vector<int> sub_arr;
            for (int j = 0; j < n; ++j) {
                if ((i >> j) & 1) {
                    sub_arr.push_back(a[j]);
                }
            }
            if (isBeautiful(sub_arr)) {
                min_remove = min(min_remove, n - (int)sub_arr.size());
            }
        }
        cout << min_remove << endl;
    }
    return 0;
}
