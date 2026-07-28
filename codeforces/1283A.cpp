#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

int main(){
    int n,m; cin>>n>>m;
    vector<pii>adj[n+1];
    for(int i=0; i<m; i++){
        int u,v,w; cin>>u>>v>>w;
        adj[v].push_back({u,w});
        adj[u].push_back({v,w});
    }
    vector<int>dis(n+1, INT_MAX);
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    int src = 1;
    dis[src]=0;
    pq.push({0,src});
    while(!pq.empty()){
        pii tmp = pq.top();
        int dist = tmp.first;
        int node = tmp.second;
        pq.pop();
        if(dist > dis[node]) continue;
        for(auto u : adj[node]){
            int v = u.first;
            int new_dist = dist + u.second;
            if(new_dist<dis[v]){
                dis[v] = new_dist;
                pq.push({new_dist,v});
            }
        }
    }
    vector<int>ans;
    for(int i=n; i>1; i--){
      cout<<dis[i]<<" ";
    }

}