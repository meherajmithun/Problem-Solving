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

void solve() {
	int n,m; cin>>n>>m;
	vector<int>adj[n+1];
	for(int i=0; i<m; i++){
		int u,v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int src=1;
	queue<int>q; q.push(src);
	vector<int>visited(n+1, 0),level(n+1, -1);
	visited[src] = 1; level[src]=0;
	while(!q.empty()){
		int u = q.front(); q.pop();
		for(auto v : adj[u]){
			if(visited[v]) continue;
			level[v] = level[u]+1;
			visited[v]=1; q.push(v);
		}
	}
	int query; cin>>query;
	while(query--){
		int k; cin>>k;
		if(k>n){
			cout<<"impossible\n"; continue;
		}
		if(level[k]==-1){
			cout<<"impossible\n"; continue;
		}
		cout<<level[k]<<nl;
	}

}

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    int w = 1;
    while (tc--) {
        cout << "Case " << w++ << ":\n";
        solve();
    }
    return 0;
}
