// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

vector<int> a;
vector<int> leftSum, rightSum;

void generateSums(int l, int r, vector<int> &v) {
    int len = r - l;

    for (int mask = 0; mask < (1LL << len); mask++) {
        int sum = 0;

        for (int i = 0; i < len; i++) {
            if (mask & (1LL << i)) {
                sum += a[l + i];
            }
        }

        if (sum <= 1000000000LL)
            v.push_back(sum);
    }
}

void solve() {
    int n, x;
    cin >> n >> x;

    a.resize(n);

    for (auto &v : a)
        cin >> v;

    int mid = n / 2;

    generateSums(0, mid, leftSum);
    generateSums(mid, n, rightSum);

    sort(rightSum.begin(), rightSum.end());

    int ans = 0;

    for (int sum : leftSum) {
        if (sum > x)
            continue;

        int need = x - sum;

        auto lo = lower_bound(rightSum.begin(), rightSum.end(), need);
        auto hi = upper_bound(rightSum.begin(), rightSum.end(), need);

        ans += hi - lo;
    }

    cout << ans << nl;
}

int32_t main() {
    fast;

    solve();

    return 0;
}