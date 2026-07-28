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
    int n,m; cin>>n>>m;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    sort(v.begin() , v.end());
    int sum=0;
    for(auto u : v) sum += u;
    int ans=sum;
    for(int i=0; i<m; i++){
        int tmp = sum + (n*i);
        int lb = v.end()-lower_bound(v.begin() , v.end(), m-i);
        //cout<<lb<<" ";
        int mx = tmp - (m*lb);
        ans = min(ans, mx);
    }
    print(ans);
}

int32_t main() {
    fast
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}