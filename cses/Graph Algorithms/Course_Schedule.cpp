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

void solve() {
    int n,m; cin>>n>>m;
    vector<int>adj[N],in(N,0);
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        in[v]++;
    }
    queue<int>q;
    for(int i=1; i<=n; i++){
        if(in[i]==0){
            q.push(i);
        }
    }
    vector<int>ans;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        ans.push_back(u);
        for(auto v : adj[u]){
            in[v]--;
            if(in[v]==0) q.push(v);
        }
    }
    if(sz(ans)!=n) {
        cout<<"IMPOSSIBLE\n"; return;
    }
    for(auto a : ans) cout<<a<<" "; cout<<nl;

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