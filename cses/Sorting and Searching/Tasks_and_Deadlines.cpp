// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n; cin>>n;
    vector<pair<int,int>>vp(n);
    for(auto &[a,b] : vp) cin>>a>>b;
    sort(all(vp));
    int ans = 0,cur=0;
    for(auto [a,b] : vp){
        cur += a;
        ans += (b-cur);
    }
    cout<<ans<<nl;
}

int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}