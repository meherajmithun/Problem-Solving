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
	}
	int src; cin>>src;
	int des; cin>>des;
	
	vector<int>visited(n+123, 0);
	int tot=0;
	for(int i=0; i<n; i++){
		if(!visited[i]){
			visited[i]=1;
			queue<int>q;
			vector<int>vis(n+123, 0),level(n+123, 0);
			q.push(i); vis[i]=1; level[i]=0;
			while(!q.empty()){
				int u = q.front(); q.pop();
				for(auto v : adj[u]){
					if(vis[v]) continue;
					q.push(v); vis[v]=1; level[v] = level[u]+1;
					visited[i]=1;
				}
			}
		}
	}
}
int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    int w = 1;
    while (tc--) {
        cout << "Case " << w++ << ": ";
        solve();
    }
    return 0;
}