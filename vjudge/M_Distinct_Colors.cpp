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
vector<int>colour,adj[N],child[N];

void dfs1(int u , int par){
    for(auto v : adj[u]){
        if(v==par) continue;
        child[u].push_back(v);
        dfs1(v,u);
    }
}

void dfs(int u, int par,set<int>&st){
    st.insert(colour[u]);
    for(auto v : child[u]){
        if(v==par) continue;
        dfs(v,u,st);
    }
}

void solve() {
    int n; cin>>n;
    colour.resize(n+1); adj->resize(n+1);
    for(int i=1; i<=n; i++) cin>>colour[i];

    for(int i=1; i<n; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs1(1,0);
    for(int i=1; i<=n; i++){
        set<int>st;
        dfs(i, 0,st);
        // for(auto a : st) cout<<a<<" "; cout<<nl;
        cout<<sz(st)<<" ";
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