#include<bits/stdc++.h>
using namespace std;
// #define int long long
const int N = 200005;
vector<int>adj[N],visited(N,0), colour(N,0);
bool possible=1;
int cnt2,cnt1;
 
void dfs(int u,int par, int c){
    if(c==1) cnt1++;
    else cnt2++;
    for(auto v : adj[u]){
        if(v==par) continue;
        dfs(v,u,3-c);
    }
}
 
int32_t main(){
    int n ; cin>>n;
    for(int i=1; i<n; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cnt2=0,cnt1=0;
    dfs(1,0,1);

    // cout<<cnt1<<" "<<cnt2<<endl;
    cout<<(1LL*cnt1*cnt2-(n-1));
 
}
