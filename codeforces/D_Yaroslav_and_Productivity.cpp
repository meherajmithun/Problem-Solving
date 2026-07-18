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
    vector<int>a(n),b(m);
    for(auto &a : a) cin>>a;
    for(auto &a : b) cin>>a;
    sort(all(b));
    // for(auto a : a) cout<<a<<" "; cout<<nl;
    // for(auto a : b) cout<<a<<" "; cout<<nl;

    int ans = 0,last=0;
    for(auto val : b){
        int cur = 0;
        for(int i=last; i<val; i++){
            cur += a[i];
        }
        // cout<<abs(cur)<<" ";
        ans += abs(cur); last = val;
    }
    while(last<n){
        ans += a[last];
        last++;
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