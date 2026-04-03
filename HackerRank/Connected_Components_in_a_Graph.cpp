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
const int N = 2e5+123;
vector<int>adj[N],visited(N,0);

void dfs(int u){
    visited[u]=1;
    for(auto v : adj[u]){
        if(visited[v]) continue;
        dfs(v);
    }
}

void solve() {
    int n,m; cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            dfs(i); cnt++;
        }
    }
    cout<<cnt<<nl;

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