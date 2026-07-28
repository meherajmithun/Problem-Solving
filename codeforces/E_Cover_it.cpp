#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 200005;

void solve(){
    int n,m; cin>>n>>m;
    vector<int>adj[n+1],visited(n+1, 0);
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>dist(n+1, 0),ans; 
    queue<int>q;
    q.push(1); visited[1]=1;
    int c = 0;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(auto v : adj[u]){
            if(visited[v]) continue;
            visited[v] = 1; q.push(v);
            dist[v] = dist[u]+1;
        }
    }
    vector<int>even,odd;
    for(int i=1; i<=n; i++) {
        if(!(dist[i]&1)) odd.push_back(i);
        else even.push_back(i);
        // cout<<dist[i]<<" ";
    }
    if(even.size()<odd.size()){
        cout<<even.size()<<endl;
        for(auto a : even) cout<<a<<" "; cout<<endl;
    }
    else{
        cout<<odd.size()<<endl;
        for(auto a : odd) cout<<a<<" "; cout<<endl;
    }
    // cout<<endl;
    // cout<<ans.size()<<endl;
    // for(auto a : ans) cout<<a<<" "; cout<<endl;
    // cout<<n<<" -> ";
    // for(auto a : ans) cout<<a<<" "; cout<<'\n';
}

int32_t main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }


}