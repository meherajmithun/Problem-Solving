// #pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define pii pair<ll,ll>
const int N = 500+21;
int ans[N][N];
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<pii>adj[N];
    int n,m,query; cin>>n>>m>>query;
    for(int i=0; i<m; i++){
        ll a,b,c; cin>>a>>b>>c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    //ans.resize(n);
    //cout<<ans[1];
    for(int i=1; i<=n; i++){
        vector<ll>dis(N+1, LLONG_MAX);
        priority_queue<pii,vector<pii>,greater<pii>>pq;
        dis[i] = 0;
        pq.push({0,i});
        while(!pq.empty()){
            pii tmp = pq.top();
            int dist = tmp.first;
            int node = tmp.second;
            pq.pop();
            if(dis[node]<dist) continue;
 
            for(auto &[v,w] : adj[node]){
                int new_dis = dist+w;
                if(new_dis < dis[v]){
                    dis[v] = new_dis;
                    pq.push({new_dis,v});
                }
            }
        }
        for(int j=1; j<=n; j++){
            ans[i][j] = dis[j];
        }
        //cout<<'\n';
    }
 
    while(query--){
        int a,b; cin>>a>>b;
        if(ans[a][b] != LLONG_MAX)cout<<ans[a][b]<<'\n';
        else cout<<-1<<'\n';
    }
}
