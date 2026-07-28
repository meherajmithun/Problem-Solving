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
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    for(int i=0; i<n/2; i++){
        if(v[i]==v[i+1] or v[n-i-1]==v[n-i-2]) swap(v[i], v[n-i-1]);
    }
    // for(auto a : v) cout<<a<<" "; cout<<nl;
    int ans = 0;
    for(int i=0; i<n-1; i++){
        if(v[i]==v[i+1]) ans++;
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