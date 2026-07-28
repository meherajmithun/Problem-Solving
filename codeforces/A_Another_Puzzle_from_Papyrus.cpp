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
#define print(x) cout<<x<<'\n'

void solve() {
    int n,c; cin>>n>>c;
    vector<int>a(n),b(n);
    for(auto &a : a) cin>>a;
    for(auto &a : b) cin>>a;
    int ans = INT_MAX,res=0;
    bool f = 1;
    for(int i=0; i<n; i++){
        if(a[i]<b[i]){
            f = 0; break;
        }
        else res += abs(a[i]-b[i]);
    }
    if(f) ans = res;
    sort(all(a)); sort(all(b));
    f = 1; 
    res = c;
    // cout<<res<<" "<<ans<<nl;
    for(int i=0; i<n; i++){
        if(a[i]<b[i]){
            f = 0; break;
        }
        else res += abs(a[i]-b[i]);
    }
    if(f) ans = min(ans, res);
    // cout<<res<<" "<<ans<<nl;
    if(ans==INT_MAX) ans = -1;
    print(ans);
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