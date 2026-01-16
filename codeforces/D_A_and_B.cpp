#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

// Function to calculate the minimum swaps for one character type X
long long min_swaps_for_type(int n, const string& s, char target_char) {
    // 1. Find initial indices and calculate misalignment k_j
    vector<long long> k_values;
    int index_count = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == target_char) {
            // p_j is the initial index i
            // j is the relative index (0-based)
            long long p_j = i;
            long long j = index_count;
            // k_j = p_j - j (The required starting position for the final block)
            k_values.push_back(p_j - j);
            index_count++;
        }
    }

    if (index_count <= 1) {
        return 0; // Already a single block (or only one char)
    }

    // 2. Find the median of k_j
    sort(k_values.begin(), k_values.end());
    
    // The median is the element at floor((N-1)/2)
    long long median_k = k_values[(index_count - 1) / 2];

    // 3. Calculate the minimum L1 distance (Total Swaps)
    long long min_swaps = 0;
    for (long long k : k_values) {
        min_swaps += abs(k - median_k);
    }

    return min_swaps;
}

void solve() {
    int n;
    if (!(cin >> n)) return;
    string s;
    cin >> s;

    if (n <= 1) {
        cout << 0 << "\n";
        return;
    }

    // Calculate minimum swaps for grouping 'a's
    long long swaps_a = min_swaps_for_type(n, s, 'a');

    // Calculate minimum swaps for grouping 'b's
    long long swaps_b = min_swaps_for_type(n, s, 'b');

    // The final answer is the minimum of the two costs
    cout << min(swaps_a, swaps_b) << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}