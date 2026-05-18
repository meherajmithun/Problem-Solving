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
#define pii pair<int,int>
#define tii tuple<int,int,int>

void solve() {
    int n,m; cin>>n>>m;
    vector<pii>adj[n+1];
    for(int i=0; i<m; i++){
        int u,v,w; cin>>u>>v>>w;
        adj[u].push_back({v, w});
        // adj[v].push_back({u, w});
    }
    int dis[2][n+(123)];
    for(int i=0; i<2; i++){
        for(int j=0; j<=n; j++){
            dis[i][j] = LLONG_MAX;
        }
    }
    priority_queue<tii,vector<tii>,greater<tii>>pq;
    pq.push({0, 1, 0});
    dis[0][1] = 0;
    while(!pq.empty()){
        tii f = pq.top(); pq.pop();
        int d,u,coupon;
        tie(d,u,coupon) = f;
        if(dis[coupon][u]<d) continue;
        for(auto [v,w] : adj[u]){
            int nd = d+w;
            if(nd<dis[coupon][v]){
                pq.push({nd, v, coupon});
                dis[coupon][v] = nd;
            }
            if(coupon) continue;
            nd = d+(w/2);
            if(nd<dis[1][v]){
                pq.push({nd, v, 1});
                dis[1][v] = nd;
            }
        }
    }
    print(min(dis[0][n],dis[1][n]));
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