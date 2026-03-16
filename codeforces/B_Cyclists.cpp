// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n,k,p,m; cin>>n>>k>>p>>m;
    vector<int>v(n),cs;
    for(auto &a : v) cin>>a;

    for(int i=0; i<p-1; i++) cs.push_back(v[i]);
    sort(all(cs));
    // for(auto a : cs) cout<<a<<" "; cout<<nl;
    int cost = 0;
    if(p>k) for(int i=0; i<p-k; i++) cost += cs[i];
    // cout<<cost<<nl;
    if(cost>m){
        cout<<"0\n"; return;
    }
    int mn = INT_MAX;
    for(int i=0; i<n; i++){
        if(i!=p-1) mn = min(mn,v[i]);
    }
    // cout<<mn<<nl;
    int c = m-cost;
    int t = v[p-1]+1LL*(n-k)*mn, ans = 0;
    // cout<<t<<" "<<c<<nl;
    while(c>=v[p-1]){
        c -= v[p-1];
        ans++;
        if(c<1LL*(n-k)*mn) break;
        c -= 1LL*(n-k)*mn;
    }
    cout<<ans<<nl;


}

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}