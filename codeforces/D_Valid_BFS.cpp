#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>adj[n+1];
    for(int i=0; i<n-1; i++){
        int u,v; cin>>u>>v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    vector<int>seq(n);
    map<int,int>parent,child;
    for(int i=0; i<n; i++){
        cin>>seq[i];
        parent[i] = seq[i];
    }
    // for(auto u : parent){
    //     cout<<u.second<<" "<<u.first<<endl;
    // }
    vector<int>node;
    queue<int>q;
    q.push(1);
    int visited[n+1] = {0};
    int level[n+1] = {0};
    visited[1] = 1;
    node.push_back(1);
    level[1] = 0;
    int k=1;
    child[0] = 1; 
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v : adj[u]){
            if(visited[v]) continue;

            q.push(v);
            visited[v] = 1;
            level[v] = level[u]+1;
            node.push_back(v);
            child[k++] = v;
        }
    }
    // for(int i=0; i<n; i++){
    //     cout<<node[i]<<" "<<level[node[i]]<<endl;
    // }
    int on=0,off=0;
    for(int i=0; i<n; i++){
        if(parent[i]>=child[i]){
            on = 1;
        }
        if(on and off==0){
            if(parent[i] < child[i]){
                cout<<"No";
                return 0;
            }
        }
        else if(parent[i] <=child[i]){
            off = 1;
        }
        if(on == 0 and off){
            if(parent[i] > child[i]){
                cout<<"No";
                return 0;
            }
        }
    }
    //for(auto u : child) cout<<u.second<<" "<<u.first<<endl;
    // for(int i=1; i<n; i++){
    //     if(level[node[i-1]] > level[node[i]]){
    //         cout<<"No";
    //         return 0;
    //     }
    // }
    cout<<"Yes";
}