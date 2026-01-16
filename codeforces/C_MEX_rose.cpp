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
    int n,k ; cin>>n>>k;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int mex = 0,cnt=0;
    map<int,int>mp;
    for(auto u : v){
        mp[u]++;
        if(u == k) cnt++;
    }
    int ans = 0;
    for(int i=0; i<k; i++){
        if(mp[i] == 0) ans++;
    }
    //cout<<mex<<" "<<endl;
    // if(mex == k and cnt == 0){
    //     print(cnt);
    //     return;
    // }
    cout<<max(cnt,ans)<<endl;
}

int32_t main() {
    fast
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}