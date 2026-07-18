// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long double
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    ll h,w; cin>>h>>w;
    ll k = 100.00;
    ll x = h/k;
    ll t = h-(x*k);
    // cout<<t/k<<nl;
    ll y = ((w/x)/x);
    ll z = 25; 
    
    // cout<<x<<" "<<y<<" "<<z<<nl;

    if(y>=z) cout<<"Yes";
    else cout<<"No";
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