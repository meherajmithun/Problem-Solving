#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long modpow(long long a, long long b) {
    long long r = 1;
    while (b) {
        if (b & 1) r = r * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return r;
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> pos;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == -1) pos.push_back(i);
    }

    int k = (int)pos.size();

    long long ans = 0;

    for (int mask = 0; mask < (1 << k); mask++) {

        vector<int> s = a;

        for (int j = 0; j < k; j++) {
            s[pos[j]] = (mask >> j) & 1;
        }

        int cnt = 0;

        for (int i = 1; i + 1 < n; i++) {
            if (s[i - 1] == s[i + 1]) cnt++;
        }

        ans = (ans + modpow(2, cnt)) % MOD;
    }

    cout << ans % MOD << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) solve();
}