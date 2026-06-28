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
    int n,x; cin>>n>>x;
    int cnt = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=min((n/i), x-i-1); j++){
            if(i*j>n) break;
            int limit1 = n-(1LL*i*j); limit1 /= (i+j);
            int limit2 = x-i-j;
            int mn = min(limit1,limit2);
            if(mn>0) cnt += mn;
            // cout<<limit1<<" "<<limit2<<" "<<mn<<nl;
        }
        // cout<<cnt<<nl;
    }
    print(cnt);
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
