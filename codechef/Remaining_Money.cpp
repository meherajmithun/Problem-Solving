//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).end(), (x).begin()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve() {
    int n; cin>>n;
    int a,b; cin>>a>>b;
    cout<<n-(a*b)<<endl;
}

int32_t main() {
    fast
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}