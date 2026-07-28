// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>red(n);
    for(auto &u : red) cin>>u;
    int m; cin>>m;
    vector<int>blue(m);
    for(auto &u : blue) cin>>u;
    vector<int>p_sum_r(n+1),p_sum_b(m+1);
    for(int i=1; i<=n; i++){
        p_sum_r[i] = p_sum_r[i-1]+red[i-1];
    }    
    //for(auto u : p_sum_r) cout<<u<<" "; cout<<nl;
    for(int i=1; i<=m; i++){
        p_sum_b[i] = p_sum_b[i-1]+blue[i-1];
    }
    //for(auto u : p_sum_b) cout<<u<<" "; cout<<nl;

    int ans = *max_element(p_sum_r.begin() , p_sum_r.end()) + *max_element(p_sum_b.begin() , p_sum_b.end());
    if(ans < 0) ans = 0;
    cout<<ans<<'\n';
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}