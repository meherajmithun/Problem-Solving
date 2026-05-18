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
    vector<vector<pii>>adj(n+1);
    for(int i=0; i<m; i++){
        int u,v,w; cin>>u>>v>>w;
        w = (1LL<<w)%mod;
        // cout<<w<<" ";
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    int src,des; cin>>src>>des;

    priority_queue<pii,vector<pii>,greater<pii>>pq;
    vector<int>dist(n+123, LLONG_MAX),parent(n+123, -1);

    pq.push({0, src});
    dist[src] = 0;
    while(!pq.empty()){
        pii p = pq.top(); pq.pop();
        int d,u;
        tie(d,u) = p;
        if(u==des) break;
        if(dist[u]<d) continue;
        for(auto [v,w] : adj[u]){
            int nd = (d+w);
            if(nd<dist[v]){
                parent[v] = u;
                pq.push({nd, v});
                dist[v] = nd;
            }
        }
    }

    if(dist[des]==LLONG_MAX){
        cout<<"-1\n"; return ;
    }

    print(dist[des]%mod);

    vector<int>path;
    for(int i=des; i!=-1;){
        path.push_back(i);
        i = parent[i];
    }

    print(sz(path));
    reverse(all(path));
    for(auto a : path) cout<<a<<" "; cout<<nl;

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