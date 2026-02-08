#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int tc; cin>>tc;
    while(tc--){
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    int k;
    cin >> k;

    unordered_map<int, int> mp;
    for (auto x : b) mp[x]++;

    int ans = 0;
    for (auto x : a) {
        int need = k - x;
        if (mp.count(need)) ans += mp[need];
    }

    cout << ans << "\n";
}
}
