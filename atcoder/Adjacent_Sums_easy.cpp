// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

int call(int par, vector<int>&a, vector<int>&b, int n){
    int ans = par, pre=par;
    for(int i=0; i<n-1; i++){
        int t = pre^(a[i]+a[i+1]&1)^b[i];
        ans += t; pre = t;
        // cout<<ans<<" "<<t<<nl;
    }
    return ans;
}


void solve() {
    int n,m; cin>>n>>m;
    vector<int>a(n),b(n-1);
    for(auto &a : a) cin>>a;
    for(auto &a : b) cin>>a;
    int x = call(0, a, b, n);
    int y = call(1, a, b, n);
    // cout<<x<<" "<<y<<nl;
    cout<<min(x,y)<<nl;
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