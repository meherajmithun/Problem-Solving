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
    int n; cin>>n;
    for(int i=1; i<=n; i++) cout<<i<<" ";
    for(int i=1; i<=n; i++) cout<<i<<" "; //cout<<"1 ";
    for(int i=2; i<=n; i++) cout<<i<<" "; cout<<"1 ";
    for(int i=1; i<=n; i++) cout<<i<<" ";
    cout<<nl;
}
// 1 6 8 10
// 1 4 8 9

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}