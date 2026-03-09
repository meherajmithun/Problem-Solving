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
vector<int>adj[N],subtree(N,0);
int n; 

void dfs(int u, int par){
    subtree[u]=1;
    for(auto v : adj[u]){
        if(v==par) continue;
        dfs(v,u);
        subtree[u] += subtree[v];
    }

}

int centroid(int u, int par){
    for(auto v : adj[u]){
        if(v==par) continue;
        int x = subtree[v];
        if(x>n/2) return centroid(v,u);
    }
    return u;
}

void solve() {
    cin>>n;
    for(int i=1; i<n; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,-1);

    // for(int i=1; i<=n; i++) cout<<subtree[i]<<" "; cout<<nl;

    int ans = centroid(1,-1);
    cout<<ans<<nl;

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