#include<bits/stdc++.h>
using namespace std;
const int N = 200005;

int main(){
    int n,m; cin>>n>>m;
    vector<int>adj[n+123],ind(N, 0),topological;
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        ind[v]++;
    }
    queue<int>q;
    for(int i=1; i<=n; i++){
        if(ind[i]==0) q.push(i);
    }
    while(!q.empty()){
        int u = q.front(); q.pop(); topological.push_back(u);
        for(auto v : adj[u]){
            ind[v]--;
            if(ind[v]==0) q.push(v);
        }
    }
    if((int)topological.size()!=n) cout<<"IMPOSSIBLE";
    else {
        for(auto a : topological) cout<<a<<" ";
    }
}