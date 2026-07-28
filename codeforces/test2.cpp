#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // for(int i=1; i<=n; i++){
    //     cout<<i<<" -> ";
    //     for(auto u : adj[i]){
    //         cout<<u<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<int>visited(n+1, 0);
    int src = 1;
    int level[n+1] = {0};
    visited[src] = 1;
    level[src]= 0;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v : adj[u]){
            if(visited[v] == 1){

            }
            else{
                visited[v] = 1;
                level[v] = level[u]+1;
                q.push(v);
            }
        }
    }
    for(int i=1; i<=n; i++){
        cout<<i<<" -> "<<level[i]<<" -> ";
        for(auto u : adj[i]){
            cout<<u<<" ";
        }
        cout<<endl;
    }

}