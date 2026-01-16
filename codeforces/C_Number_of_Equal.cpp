// IN THE NAME OF ALLAH

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

void solve(){
    int n,m; cin>>n>>m;
    vector<int>v(n),v2(m);
    for(auto &u : v) cin>>u;
    for(auto &u : v2) cin>>u;
    int ans = 0;
    map<int,int>mp,mp2;
    for(auto u : v){
        mp[u]++;
    }  
    for(auto u : v2){
        mp2[u]++;
    }

    for(auto &[u,v] : mp){
        if(mp.count(u)){
            ans += (v*mp2[u]);
        }
    }
    print(ans);
}

int32_t main(){
    fast
    int tc= 1;// cin >> tc;
    while(tc--){
        solve();
    }
}