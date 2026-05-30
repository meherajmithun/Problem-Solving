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
#define print(x) cout<<x<<'\n'
#define pii pair<int,int>

void solve() {
    string s,t; cin>>s>>t;
    int n; cin>>n;
    int adj[27][27];
    memset(adj, -1, sizeof(adj));
    for(int i=0; i<n; i++){
        char a,b; cin>>a>>b;
        int w; cin>>w;
        int u = a-'a', v = b-'a';
        if(adj[u][v]==-1) adj[u][v] = w;
        else adj[u][v] = min(adj[u][v], w);
        // adj[v][u] = w;
    }
    if(sz(s)!=sz(t)){
        cout<<"-1\n"; return;
    }
    int ans = 0;
    for(int i=0; i<sz(s); i++){
        if(s[i]==t[i]) continue;
        int u = s[i]-'a', v = t[i]-'a';
        int cost1 = adj[u][v];
        if(adj[u][v]!=-1){
            s[i] = t[i];
            ans += cost1;
        }
        else{
            t[i] = s[i];
            ans += adj[v][u];
        }  
        // cout<<ans<<nl;  
    }
    cout<<ans<<nl;
    cout<<s<<nl;
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