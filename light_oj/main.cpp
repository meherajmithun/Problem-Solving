#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> a) {
    int n = a.size();

    vector<int> suf(n);
    suf[n - 1] = a[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        suf[i] = max(suf[i + 1], a[i]);
    }

    long long total = 0;
    for (int x : a) total += x;

    long long moved = 0;
    int mx = 0;

    for (int i = n - 1; i >= 0; i--) {
        mx = max(mx, a[i]);
        moved += min(a[i], mx);
    }

    return moved;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long ans = solve(a);

        for (int i = 0; i < n; i++) {
            vector<int> b = a;
            if (b[i] > 0) {
                b[i]--;

                ans = max(ans, (long long)solve(b));
            }
        }

        cout << ans << '\n';
    }

    return 0;
}