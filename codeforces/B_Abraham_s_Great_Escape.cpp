#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    int n, k; cin>>n>>k;

    long long n_sq = (long long)n * n;
    long long n_trap = n_sq - k;

    // 1. Feasibility Check: n^2 - k must be even to be solved with 2-cell cycles.
    if (n_trap < 0 || n_trap % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    // 2. Construction:
    cout << "YES" << endl;

    // Initialize the grid with all 'U' (Up)
    vector<string> grid(n, string(n, 'U'));

    long long traps_left = n_trap;

    // Iterate through the grid to form 2-cell vertical cycles
    // We only need to iterate up to row n-2 (index n-2) because a 'D' at (i, j) 
    // forms a cycle with (i+1, j).
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n; ++j) {
            if (traps_left >= 2) {
                // Set the arrow at the upper cell (i, j) to 'D' (Down)
                // This creates a cycle: (i, j) -> (i+1, j) -> (i, j) -> ...
                // Trapping both cells.
                grid[i][j] = 'D';
                traps_left -= 2;
            } else {
                // We've created enough traps, so we can stop.
                goto print_grid; 
            }
        }
    }

    print_grid:
    // Output the resulting grid
    for (int i = 0; i < n; ++i) {
        cout << grid[i] << endl;
    }
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