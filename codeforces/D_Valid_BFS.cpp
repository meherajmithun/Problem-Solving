// IN THE NAME OF ALLAH
// #pragma GCC optimize("Ofast")
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

vector<int>Hash(N+1);

bool cmp(int a, int b){
    return Hash[a]<Hash[b];
}


void solve() {
    int n; cin>>n;
    vector<int>adj[n+1];
    for(int i=1; i<n; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        Hash[v[i]] = i+1;
    }
    for(int i=1; i<=n; i++) sort(all(adj[i]),cmp);
    queue<int>q;
    vector<int>vis(n+1, 0),ans;
    q.push(1); vis[1] = 1;
    ans.push_back(1);
    int i=0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v : adj[u]){
            if(vis[v]) continue;
            vis[v]=1; q.push(v);
            ans.push_back(v);
        }
        i++;
    }
    // for(auto a : v) cout<<a<<" "; cout<<nl;
    // for(auto a : ans) cout<<a<<" "; cout<<nl;
    if(ans==v) cout<<"Yes";
    else cout<<"No";

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