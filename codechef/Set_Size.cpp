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
    int n; cin>>n;
    int query; cin>>query;
    map<int,int>mp;
    vector<int>v;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(!mp[a]) {v.push_back(a); mp[a]++;}
    }
    n = sz(v);
    sort(all(v));
    // for(auto a : v) cout<<a<<" "; cout<<nl;
    vector<int>dif(n,0),pre(n+1,0);
    for(int i=0; i<n-1; i++){
        dif[i] = v[i+1]-v[i];
    }
    sort(all(dif));
    
    // for(auto a : dif) cout<<a<<" "; cout<<nl;

    for(int i=1; i<=n; i++){
        pre[i] = (pre[i-1] + dif[i-1]);
    }
    // for(auto a : pre) cout<<a<<" "; cout<<nl;
    
    while(query--){
        int x; cin>>x;
        int ub = upper_bound(all(dif),x)-dif.begin();
        int ans = pre[ub];
        ans += (n - ub) * x;
        ans += x;
        cout << ans << nl;
    }
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