//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

void solve() {
    int n, k;
    cin >> n >> k;

    vi v(n);

    // Fill first part with reverse order for first k elements
    for (int i = 0; i < k; ++i) {
        v[i] = k - i;
    }

    // Fill the rest with increasing order starting from k + 1
    for (int i = k; i < n; ++i) {
        v[i] = i + 1;
    }

    // Print the result
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
