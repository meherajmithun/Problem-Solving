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
#define pii pair<int,int>

void solve() {
    int n,m; cin>>n>>m;
    vector<pair<int,int>>adj[n+1];
    for(int i=0; i<m; i++){
        int u,v,w; cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    int src=1; cin>>src;
    priority_queue<pii, vector<pii>, greater<pii>>pq;
    vector<int>dis(n+1 , LLONG_MAX);
    pq.push({0, src}); dis[src]=0;
    while(!pq.empty()){
        int dist = pq.top().first;
        int u = pq.top().second; pq.pop();
        if(dis[u]<dist) continue;
        for(auto [v,w] : adj[u]){
            int new_dis =max(dist,w);
            if(new_dis<dis[v]){
                dis[v] = new_dis;
                pq.push({new_dis, v});
            }
        }
    }
    for(int i=0; i<n; i++){
        if(dis[i]==LLONG_MAX) cout<<"impossible\n";
        else cout<<dis[i]<<nl;
    }
    // for(int i=1; i<=n; i++) cout<<dis[i]<<" "; cout<<nl;
}
int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    int w = 1;
    while (tc--) {
        cout << "Case " << w++ << ": ";
        solve();
    }
    return 0;
}

crc
activity diagram
dfd