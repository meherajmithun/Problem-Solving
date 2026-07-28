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

bool cmp(pair<int,int>a, pair<int,int>b){
    return a.second>b.second;
}

void solve() {
    int n,k,m; cin>>n>>k>>m;
    vector<pair<int,int>>vp(n);
    for(auto &[a,b] : vp) cin>>a>>b;
    for(auto [a,b] : vp) cout<<a<<" "<<b<<nl; cout<<nl<<nl;
    sort(all(vp), cmp);
    for(auto [a,b] : vp) cout<<a<<" "<<b<<nl;

    map<int,int>mp;
    int total = 0;
    for(int i=0; i<n; i++){
        if(sz(mp)>=k){
            total += vp[i].second;
        }
        else{
            
        }
    }

}

int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}