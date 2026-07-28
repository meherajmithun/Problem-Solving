//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pii pair<int,int>
const int N = 1000+123;
int n,m,k;
int dist[N][N];
vector<pii>adj[N];

void dijkstra(int src){

    priority_queue<pii, vector<pii>, greater<pii>>pq;
    vector<int>dis(n+1 , LLONG_MAX);
    pq.push({0, src}); dis[src]=0;
    while(!pq.empty()){
        int d = pq.top().first;
        int u = pq.top().second; pq.pop();
        if(dis[u]<d) continue;
        for(auto [v,w] : adj[u]){
            int new_dis = w+d;
            if(new_dis<dis[v]){
                dis[v] = new_dis;
                pq.push({new_dis, v});
            }
        }
    }

    for(int i=1; i<=n; i++){
    	dist[src][i] = dis[i];
    }

    // for(auto a : dist[src]) cout<<a<<" "; cout<<nl;


    // cout<<src<<" -> ";
    // for(int i=1; i<=n; i++){
    // 	cout<<dist[src][i]<<" ";
    // }
    // cout<<nl;
}

void solve() {
    cin>>n>>m>>k;
    for(int i=0; i<m; i++){
        int u,v,w; cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    for(int i=1; i<=n; i++){
    	dijkstra(i);
    }

    int ans = INT_MAX;
    vector<pii>node;
    while(k--){
    	int a,b; cin>>a>>b;
        node.push_back({a,b});
    	// cout<<dist[a][b]<<nl;
    }
    for(int i=1; i<=n; i++){
        for(auto [v,w] : adj[i]){
            int cost = 0;
            for(auto [a,b] : node){
                cost += min({dist[a][b], dist[a][i]+dist[v][b], dist[a][v]+dist[i][b]});
            }

            // cout<<cost<<" ----> ";
            ans = min(ans,cost);
        }
        
    }
    cout<<ans<<nl;
    // for(int i=1; i<=n; i++) cout<<dis[i]<<" "; cout<<nl;
}
int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    int w = 1;
    while (tc--) {
        // cout << "Case " << w++ << ": ";
        solve();
    }
    return 0;
}