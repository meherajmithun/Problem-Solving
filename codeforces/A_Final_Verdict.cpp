#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (auto &u : v) cin >> u;

    if (n == 1) {
        if (v[0] == x) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
        return;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) sum += v[i];
    if (sum != x * n) {
        cout << "NO" << '\n';
        return;
    }

    cout << "YES" << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}