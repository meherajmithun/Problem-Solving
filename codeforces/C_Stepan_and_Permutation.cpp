// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,x,y; cin>>n>>x>>y;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    int g = gcd(x,y);
    // cout<<g<<nl;
    for(int i=0; i<n; i++){
        int pos = i+1;
        int t = abs(pos-v[i]);
        // cout<<t<<" "<<g<<nl;
        if(t%g != 0){
            cout<<"NO\n"; return;
        }
    }
    cout<<"YES\n";
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