// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];
        
        bool ok = true;
        if (b[0] < 0) ok = false;

        int sum = b[0];
        for (int i = 1; i < n; i++) {
            if (b[i] < b[i-1]) ok = false;
            if (b[i] > sum) ok = false;
            sum += b[i];
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
