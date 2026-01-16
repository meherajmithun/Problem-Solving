#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<long long,int>
#define ll long long
const int N = 1e5+123;

void solve(){
    int n,m; cin>>n>>m;
    vector<pii>adj[n+1];

    for(int i=0; i<m; i++){
        int a,b,c; cin>>a>>b>>c;
        adj[a].push_back({b,c});
    }

    vector<ll>dis(n+1, LLONG_MIN);
    priority_queue<pii> pq;  // max-heap

    dis[1] = 0;
    pq.push({0,1});

    while(!pq.empty()){
        auto [dist, node] = pq.top();
        pq.pop();

        if(dist < dis[node]) continue;

        for (auto &[v, w] : adj[node]) {
            ll new_dis =  w;
            if (new_dis > dis[v]) {
                dis[v] = new_dis;
                pq.push({new_dis, v});
            }
        }
    }

    for(int i=1; i<=n; i++) cout<<dis[i]<<'\n';
}

int32_t main(){
    int tc; cin>>tc;
    int w=1;
    while(tc--){
        cout<<"Case "<<w++<<": ";
        solve();
    }
}
