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
    int cnt = 0;
    for(int i=0; i<n; i++){
        int mn = v[i],mx=v[i];
        int g = 0;
        for(int j=i; j<min(n, i+50); j++){
            mn = min(mn,v[j]);
            mx = max(mx, v[j]);
            g = gcd(g,v[j]);
            if(mx-mn == g) cnt++;
        }
    }
    cout<<cnt<<nl;
}
int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    int w = 1;
    while (tc--) {
        //cout << "Case " << w++ << ": ";
        solve();
    }
    return 0;
}