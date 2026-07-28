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
    int z=0,o=0,t=0 ,th=0;
    for(auto a : v){
        if(a==0) z++;
        if(a==1) o++;
        if(a==2) t++;
        // else th++;
    }
    // cout<<z<<" "<<o<<" "<<t<<" "<<th<<nl;
    int ans = z;
    int mn = min(t, o);
    // cout<<mn<<nl;
    ans += mn;   
    // cout<<ans<<nl;
    o -= mn; t -= mn;
    ans += (o/3);
    ans += (t/3);

    cout << ans << nl;

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