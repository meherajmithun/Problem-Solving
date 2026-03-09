#include<bits/stdc++.h>
using namespace std;
#define int long long

struct Edge{
    int u,v,w;
};

int32_t main(){
    int n,m; 
    cin>>n>>m;

    vector<Edge> edges;

    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        edges.push_back({a,b,c});
    }

    int s; 
    cin>>s;

    vector<int> dis(n+1,LLONG_MAX);
    dis[s] = 0;

    for(int i=1;i<=n-1;i++){
        for(auto e:edges){
            if(dis[e.u]!=LLONG_MAX && dis[e.u]+e.w < dis[e.v]){
                dis[e.v] = dis[e.u] + e.w;
            }
        }
    }
    for(auto e:edges){
        if(dis[e.u]!=LLONG_MAX && dis[e.u]+e.w < dis[e.v]){
            cout<<"Negative Cycle Detected\n";
            return 0;
        }
    }

    int query; 
    cin>>query;

    while(query--){
        int a; 
        cin>>a;

        if(dis[a]==LLONG_MAX) cout<<"Not Possible\n";
        else cout<<dis[a]<<endl;
    }
}