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
    int a,b,c; cin>>a>>b>>c;
    if(a<=3){
        cout<<min((a*b), c)<<nl; return;
    }
    int grp = a/3;
    int tk = grp*c;
    int baki = a%3;
    int nibe = min(3*b, c);
    int k = min(baki*b, c);
    int ans = (grp*nibe)+k;
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