#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
 
int main(){
    int n,m; cin>>n>>m;
    vector<int>adj[N];
    int level[N] = {0},visited[N]={0},parent[N] = {-1};
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int src = 1;
    level[1] = 0;
    visited[src] = 1;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(auto v : adj[u]){
            if(visited[v]) continue;
            visited[v] = 1;
            q.push(v);
            parent[v] = u;
            level[v] = level[u]+1;
        }
    }
    // for(int i=1; i<=n; i++) cout<<i<<" -> "<<level[i]<<'\n';
    vector<int>ans;
    for(int i=n; i!=-1; i=parent[i]){
        ans.push_back(i);
    }
    ans.pop_back();
    reverse(ans.begin() , ans.end());
    if(ans.size() == 1){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    cout<<ans.size()<<'\n';
    for(auto u : ans) cout<<u<<" ";
 
 
}