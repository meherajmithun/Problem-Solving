//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    ll n; cin>>n;
    if(n == 1){
        ll a; cin>>a;
        cout<<a<<endl;
        return;
    }
    vector<ll>v(n);
    for(auto &u : v) cin>>u;
    vector<ll>v2;
    ll mn = min(v[0],v[1]);
    ll mx = max(v[0],v[1]);
    v2.push_back(mn);
    for(ll i=2; i<n; i++){
        mn = min(mx,v[i]);
        mx = max(mx,v[i]);
        v2.push_back(mn);
    }
    v2.push_back(mx);
    // for(auto u : v2) cout<<u<<" ";
    // cout<<endl;
    ll t = 0;
    for(ll i=n-1; i>=0; i--){
        cout<<v2[i]+t<<" ";
        t = v2[i]+t;
    }
    cout<<endl;

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    ll tc; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}