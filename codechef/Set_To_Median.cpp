#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());
    ll ans = sum;
    ll pre = 0;
    for (int i = 0; i < n; i++) {
        pre += a[i];
        int k = i + 1;
        int rem = n - k;
        if (rem == 0) continue;
        double med = (double)(sum - pre) / rem;
        double new_sum = pre + med * k;
        ans = max(ans, (ll)new_sum);
    }
    cout << ans << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}