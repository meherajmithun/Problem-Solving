// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int N = 200000+123;
vector<int>adj[N],vis(N+123),bi_color(N);
bool odd_cycle=0;

void dfs(int u, int c){
    if(odd_cycle) return ;
    if(bi_color[u]!=0 and bi_color[u] != c){
        odd_cycle= 1; return;
    }
    if(vis[u]) return;
    bi_color[u] = c;
    vis[u]=1;
    for(auto v : adj[u]){
        dfs(v, 3-c);
    }
}

void solve() {
    int n,m; cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int c = 1;
    for(int i=1; i<=n; i++){
        if(!vis[i]) dfs(i, c);
        if(odd_cycle){
            cout<<"IMPOSSIBLE"; return;
        }
    }
    for(int i=1; i<=n; i++) cout<<bi_color[i]<<" ";
}

int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    int w = 1;
    while (tc--) {
        //cout << "Case " << w++ << ": ";
        solve();
    }
    return 0;
}