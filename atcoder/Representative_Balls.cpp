// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m; cin>>n>>m;
    vector<pair<int,int>>vp(n);
    for(auto &[a,b] : vp) cin>>b>>a;
    sort(vp.rbegin() , vp.rend());
    // for(auto [a,b] : vp) cout<<a<<" "<<b<<nl;
    vector<int>ans(m, -1);
    for(auto [a,b] : vp){
        if(ans[b-1] == -1){
            ans[b-1] = a;
        }
    }
    for(auto a: ans) cout<<a<<" "; cout<<nl;
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