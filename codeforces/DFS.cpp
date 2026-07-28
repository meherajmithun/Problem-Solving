#include<bits/stdc++.h>
using namespace std;
const int N = 100005;

vector<int>adj[N];
int visited[N] = {0};

void dfs(int u){
    cout<<"visiting node : "<<u<<endl;
    visited[u] = 1;

    for(auto v : adj[u]){
        if(visited[v]) continue;
        dfs(v);
    }
}

int main(){
    int n,m ; cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    dfs(1);
}