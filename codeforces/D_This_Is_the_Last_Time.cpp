//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve() {
    int n, k; cin >> n >> k;

    vector<pair<int, pair<int, int>>> v(n);

    for (int i = 0; i < n; i++) {
        int l, r, li; cin >> l >> r >> li;
        v[i] = {l, {r, li}};
    }

    sort(v.begin(), v.end());
    // for(auto &[a,b] : v){
    //     cout<<b.first<<" "<<b.second<<endl;
    // }
    int ans = k;

    while (true) {
        bool gese = false;
        for (auto &[l, r1] : v) {
            int r = r1.first, li = r1.second;
            if (l <= ans && ans <= r && li > ans) {
                ans = li;
                gese = true;
            }
        }
        if (!gese) break;
    }

    print(ans);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
