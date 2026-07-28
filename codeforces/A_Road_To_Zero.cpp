//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve() {
    int x,y; cin>>x>>y;
    int a,b; cin>>a>>b;
    int m = min(x,y);
    int n = max(x,y);
    int i = min(a,b);
    int j = max(a,b);
    int cost = (n-m)*a + (m*b);
    print(min(cost,(x+y)*a));
}

int32_t main() {
    fast
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}