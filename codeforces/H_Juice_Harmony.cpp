//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007

void solve() {
    int n; cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) cin >> v[i];

    vector<int> pre1, pre2;
    map<int, int> mp1, mp2;
    int sum1 = 0, sum2 = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum1 += v[i];
            pre1.push_back(sum1);
            mp1[sum1]++;
        } else {
            sum2 += v[i];
            pre2.push_back(sum2);
            mp2[sum2]++;
        }
    }

    // Debug prints (optional)
    // for (auto u : pre1) cout << u << " ";
    // for (auto u : pre2) cout << u << " ";
    // cout << endl;

    for (int x : pre1) {
        if (mp2.count(x)) {
            print("YES");
            return;
        }
    }
    for (int x : pre2) {
        if (mp1.count(x)) {
            print("YES");
            return;
        }
    }
    print("NO");
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
