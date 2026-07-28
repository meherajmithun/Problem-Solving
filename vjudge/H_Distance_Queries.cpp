// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int N = 200005;
const int LOG = 21;
vector<int>adj[N];
vector<int>depth(N),parent(N);
int bi_parent[N][LOG];

void pre(int u, int par){
    bi_parent[u][0] = par;
    for(int i=1; i<LOG; i++){
        if(bi_parent[u][i-1]!=-1) bi_parent[u][i] = bi_parent[bi_parent[u][i-1]][i-1];
        else bi_parent[u][i] = -1;
    }
    for(auto v : adj[u]){
        if(v==par) continue;
        pre(v,u);
    }
}

void dfs(int u, int par){
    parent[u] = par;
    for(auto v : adj[u]){
        if(v==par) continue;
        depth[v] = depth[u]+1;
        dfs(v,u);
    }
}
int kth_ances_de(int n, int k) {
    int u = n;
    for (int i = 0; i < LOG; i++) {
        if (k & (1 << i)) {
            u = bi_parent[u][i];
            if (u == -1) break;
        }
    }
    return u;
}

int lca_de(int u, int v) {
    if (depth[u] < depth[v]) swap(u, v);
    int d = depth[u] - depth[v];
    u = kth_ances_de(u, d);
    if (u == v) return u;
    for (int i = LOG - 1; i >= 0; i--) {
        if (bi_parent[u][i] != -1 && bi_parent[u][i] != bi_parent[v][i]) {
            u = bi_parent[u][i];
            v = bi_parent[v][i];
        }
    }
    return bi_parent[u][0];
}


void solve() {
    memset(bi_parent,-1, sizeof(bi_parent));
    int n,q; cin>>n>>q;
    for(int i=1; i<n; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // for(int i=1; i<=n; i++){
    //     cout<<i<<" -> ";
    //     for(auto a : adj[i]) cout<<a<<" "; cout<<nl;
    // }
    pre(1,-1); dfs(1,0);
    // for(int i=1; i<=n; i++) cout<<depth[i]<<" "; cout<<nl;
    while(q--){
        int a,b; cin>>a>>b;
        int k = lca_de(a,b);
        int ans = depth[a]+depth[b] - 2*depth[k];
        cout<<ans<<nl;
    }
}

int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}