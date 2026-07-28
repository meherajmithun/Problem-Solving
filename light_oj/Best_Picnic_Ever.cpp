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
vector<int>cnt(N,0);

void bfs(int src, vector<int>adj[], int n){
    // for(int i=1; i<=n; i++){
    //     cout<<i<<" -> ";
    //     for(auto a : adj[i]) cout<<a<<" "; cout<<nl;
    // }
    // cout<<src<<nl;
    vector<int>visited(n+1, 0);
    queue<int>q; visited[src]=1; q.push(src); cnt[src]++;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(auto v : adj[u]){
            if(visited[v]) continue;
            // cout<<v<<nl;
            q.push(v); visited[v] = 1; cnt[v]++;
        }
    }
    // for(int i=1; i<=n; i++) cout<<cnt[i]<<" "; cout<<nl;
}

void solve() {
    cnt.clear();
    cnt.resize(N, 0);
    int k,n,m; cin>>k>>n>>m;
    vector<int>cs(k);
    for(auto &a : cs) cin>>a;

    vector<int>adj[n+1];

    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
    }

    for(auto a : cs){
        bfs(a,adj, n);
    }
    int ans = 0;
    for(int i =1; i<=n; i++){
        if(cnt[i]==k) ans++;
        // cout<<cnt[i]<<" ";
    }
    // cout<<nl;
    cout<<ans<<nl;

}

int32_t main() {
    fast
    int tc = 1, C=1;
    cin >> tc;
    while (tc--) {
        cout<<"Case "<<C++<<": ";
        solve();
    }
    return 0;
}