#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    long long total_height = 0, width = 0;

    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;

        // Take the maximum as the height
        total_height += max(a, b);
        // Sum of minimums to form the base width
        width += min(a, b);
    }

    // Minimum possible perimeter
    cout << 2 * (total_height + width) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
