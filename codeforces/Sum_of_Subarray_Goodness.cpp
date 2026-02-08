#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1000000007;

int32_t main() {
    int n;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    unordered_map<int, int> last;
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        int prev = last[a[i]];
        int left = i - prev;
        int right = n - i + 1;
        ans = (ans + (a[i] % MOD) * (left % MOD) % MOD * (right % MOD)) % MOD;
        last[a[i]] = i;
    }

    cout << ans % MOD << "\n";
    return 0;
}
