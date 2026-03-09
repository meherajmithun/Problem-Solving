#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
vector<int>adj[N],visited(N, 0);
bool cycle_found=0;

//soda 1
//wine 2
//water 3


void dfs(int u, int par){
    if(cycle_found) return;
    if(visited[u]){
        cycle_found = 1;
        return;
    }
    visited[u]=1;
    for(auto v : adj[u]){
        dfs(v,u);
    }
}



void solve(){
    
    int m; cin>>m;
    for(int i=0; i<m; i++){
        string u,v; cin>>u>>v;
        if(u=="soda" and v == "wine") adj[1].push_back(2);
        if(v=="soda" and u == "wine") adj[2].push_back(1);
        else if(u=="soda" and v == "water") adj[1].push_back(3);
        else if(v=="soda" and u == "water") adj[3].push_back(1);
        else if(u=="water" and v == "wine") adj[3].push_back(2);
        else if(v=="water" and u == "wine") adj[2].push_back(3);
    }
    // for(int i=1; i<=3; i++){
    //     cout<<i<<" -> ";
    //     for(auto a: adj[i]) cout<<a<<" "; cout<<'\n';
    // }

    dfs(1,0);
    if(cycle_found){
        cout<<"No\n";
    }
    else cout<<"Yes\n";


    adj->clear();
    cycle_found=0;



}

int main(){
    int tc; cin>>tc;
    int c = 1;
    while(tc--){
        cout<<"Case "<<c++<<": ";
        solve();
    }
}