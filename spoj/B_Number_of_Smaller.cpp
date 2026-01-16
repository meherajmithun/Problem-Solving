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
    for(int i=0; i<m; i++){
        auto it = lower_bound(v.begin() , v.end(), v2[i])-v.begin();
        cout<<it<<" ";
    }   
}

int32_t main(){
    fast
    int tc = 1;// cin >> tc;
    while(tc--){
        solve();
    }
}