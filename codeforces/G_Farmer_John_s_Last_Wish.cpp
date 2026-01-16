//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> cnt(n + 1, 0);
        int best = 0;

        for (int i = 0; i < n; i++) {
            int x = a[i];

            for (int d = 1; d * d <= x; d++) {
                if (x % d == 0) {
                    cnt[d]++;
                    best = max(best, cnt[d]);
                    if (d * d != x) {
                        cnt[x / d]++;
                        best = max(best, cnt[x / d]);
                    }
                }
            }
            cout << max(0LL, best - 1) << " ";
        }
        cout << endl;
    }
}
