// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        int l = 0, r = n - 1;
        int mn = 1, mx = n;

        string ans = "";

        while (l <= r) {
            if (p[l] == mn) {
                ans += 'L';
                l++;
                mn++;
            } else if (p[r] == mn) {
                ans += 'R';
                r--;
                mn++;
            } else if (p[l] == mx) {
                ans += 'L';
                l++;
                mx--;
            } else if (p[r] == mx) {
                ans += 'R';
                r--;
                mx--;
            } else {
                // If none of min/max is on ends, pick any
                ans += 'L';
                l++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
