#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
const int N = 1e5+123;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<pii>adj[N];
    int n,m; cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v,w; cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    // if(n+1 != m){
    //     cout<<"-1\n";
    //     return 0;
    // }
    vector<int>dis(n+1, LLONG_MAX),parent(N, -1);
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    dis[1]=0;
    pq.push({0,1});
    while(!pq.empty()){
        pii tmp = pq.top();
        int dist = tmp.first;
        int node = tmp.second;
        pq.pop();
        if(dist>dis[node]) continue;

        for(auto &[v,w] : adj[node]){
            int new_dis =  w+dist;
            if(new_dis<dis[v]){
                parent[v] = node;
                dis[v] = new_dis;
                pq.push({new_dis,v});
            }
        }
    }
    if(dis[n] == LLONG_MAX){
        cout<<"-1";
        return 0;
    }
    vector<int>ans;
    int i = n;
    ans.push_back(i);
    while(i != 1){
        i = parent[i];
        ans.push_back(i);
    }
    if(ans.size() == 0) cout<<"-1";
    for(int i=ans.size()-1; i>=0; i--) cout<<ans[i]<<" ";
}