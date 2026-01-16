#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
vector<int> adj[N];
int level[N],cat[N];
int n,m,ans=0;

void dfs(int u, int parent,int biral) {
    int cnt = 0;
    if(cat[u] == 1){
        cnt = biral+1;
    }
    else {
        cnt = 0;
    }
    if(cnt>m) return;
    if(adj[u].size() == 1 and u != 1){
        ans++;
    }
    //cout<<u<<"-> "<<cnt<<endl;
    for (auto v : adj[u]) {
        if (v == parent) continue;
        dfs(v, u,cnt);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n>>m;
    for(int i=1; i<=n; i++) cin>>cat[i];
    for (int i = 0; i < n - 1; i++) {
        int u, v; cin >> u >> v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    dfs(1, 0,0);
    cout<<ans<<endl;
}