#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
vector<int>adj[N];
int level[N];
 
void dfs(int u,int par){
    for(auto v : adj[u]){
        if(v==par) continue;
        level[v] = level[u]+1;
        dfs(v,u);
    }
}
 
int main(){
    int n; cin>>n;
    for(int i=0; i<n-1; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,0);
    
    int mx_level=0,mx_level_node=0;
 
    for(int i=1; i<=n; i++){
        if(level[i]>mx_level){
            mx_level = level[i];
            mx_level_node=i;
        }
    }
    //cout<<mx_level_node<<endl;
    level[mx_level_node] = 0;
    dfs(mx_level_node,0);
    mx_level=0;
    int ep1 = mx_level_node;
    int ep2 = 1;
    
    for(int i=1; i<=n; i++){
        if(level[i] > mx_level){
            mx_level = level[i];
            ep2 = i;
        }
    }
    int ans[n+5] = {0};
    for(int i=1; i<=n; i++){
        ans[i] = level[i];
    }
 
    level[ep2] = 0;
    dfs(ep2,0);
 
    for(int i=1; i<=n; i++){
        ans[i] = max(ans[i] , level[i]);
        cout<<ans[i]<<" ";
    }
 
}