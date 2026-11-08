// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define pii pair<int,int>

const int N = 200000+123;
vector<pii>adj[N];


int dijkstra(int s, int d) {
    int src=s;
    priority_queue<pii, vector<pii>, greater<pii>>pq;
    vector<int>dis(N+1 , LLONG_MAX);
    pq.push({0, src}); dis[src]=0;
    while(!pq.empty()){
        int dist = pq.top().first;
        int u = pq.top().second; pq.pop();
        if(dis[u]<dist) continue;
        for(auto [v,w] : adj[u]){
            int new_dis = w+dist;
            if(new_dis<  dis[v]){
                dis[v] = new_dis;
                pq.push({new_dis, v});
            }
        }
    }
    if(dis[d]==LLONG_MAX) return -1;
    return dis[d];
    // for(int i=1; i<=N; i++) cout<<dis[i]<<" "; cout<<nl;
}


void solve() {
    int n,m; cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v,w; cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    int s,t,k; cin>>s>>t>>k;

    int x = dijkstra(s,k);
    if(x==-1){
    	cout<<"-1\n"; return;
    }
    int y = dijkstra(k,t);
    if(y==-1){
    	cout<<"-1\n"; return;
    }
    cout<<(x+y)<<nl;
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