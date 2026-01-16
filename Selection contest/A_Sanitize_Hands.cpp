//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n,m; cin>>n>>m;
    int cnt = 0;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    for(int i=0; i<n; i++){
        if(v[i]<=m){
            m -= v[i];
            cnt++;
        }
        else break;
    }
    print(cnt);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}