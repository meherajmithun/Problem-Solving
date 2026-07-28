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
    vector<int>c(n),p(n);
    for(int i=0; i<n; i++){
        cin>>c[i]>>p[i];
    }
    double ans = 0;
    // sort(all(c));
    for(int i=n-1; i>=0; i--){
        double d = 1.0-(p[i]/100.0);
        // cout<<d<<nl;
        ans = max(ans,c[i]+d*ans);
        // cout<<ans<<nl;
    }
    cout<<fixed<<setprecision(10)<<ans<<nl;
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