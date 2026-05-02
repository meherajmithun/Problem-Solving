#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    // Compute suffix max
    vector<int> suf(n);
    suf[n-1] = a[n-1];
    for (int i = n-2; i >= 0; i--) {
        suf[i] = max(a[i], suf[i+1]);
    }

    int not_moved = 0;
    bool can_reduce = false;

    for (int i = 0; i < n; i++) {
        int mx_right = (i == n-1 ? 0 : suf[i+1]);
        not_moved += min(a[i], mx_right);

        if (a[i] <= mx_right) {
            can_reduce = true;
        }
    }

    if (can_reduce) not_moved--;

    cout << total - not_moved << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();
}