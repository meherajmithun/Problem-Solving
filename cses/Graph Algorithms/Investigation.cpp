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
#define mod 1000000007
#define pii pair<int,int>

void solve() {
    int n,m; cin>>n>>m;
    vector<pii>adj[n+1];
    for(int i=0; i<m; i++){
        int u,v,w; cin>>u>>v>>w;
        adj[u].push_back({v, w});
        // adj[v].push_back({u, w});
    }
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    vector<int>dis(n+1, LLONG_MAX), way(n+1, 0),mn(n+1, 0), mx(n+1, 0);
    pq.push({0, 1});
    dis[1] = 0; way[1]=1;
    while(!pq.empty()){
        pii p = pq.top(); pq.pop();
        int d,u;
        tie(d,u) = p;
        if(dis[u]<d) continue;
        for(auto [v,w] : adj[u]){
            int nd = d+w;
            if(nd<dis[v]){
                pq.push({nd, v});
                dis[v] = nd;
                way[v] = way[u];
                mn[v] = mn[u]+1;
                mx[v] = mx[u]+1;
            }
            else if(nd==dis[v]){
                way[v] += way[u];
                way[v] %= mod;
                mn[v] = min(mn[u]+1,mn[v]);
                mx[v] = max(mx[u]+1,mx[v]);
            }
        }
    }
    // for(int i=1; i<=n; i++) cout<<way[i]<<" "; cout<<nl;
    cout<<dis[n]<<" "<<way[n]<<" "<<mn[n]<<" "<<mx[n]<<nl;
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