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
#define pii pair<int,int>

void solve() {
	int n,m; cin>>n>>m;
	vector<pair<int,int>>adj[n+123];
	for(int i=0; i<m; i++){
		int u,v,w; cin>>u>>v>>w;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
	}
	// int src; cin>>src;
	priority_queue<pii, vector<pii>, greater<pii>>pq;
	vector<int>dis(n+123, LLONG_MAX);
	pq.push({0, 1});
	dis[1] = 0;
	while(!pq.empty()){
		pii f = pq.top(); pq.pop();
		int u,d;
		tie(d, u) = f;
		if(dis[u]<d) continue;
		for(auto [v, w] : adj[u]){
			int nd = d+w;
			if(nd<dis[v]){
				pq.push({nd, v});
				dis[v] = nd;
			}
		}
	}
	// for(int i=0; i<n; i++){
		if(dis[n]==LLONG_MAX) cout<<"Impossible\n";
		else cout<<dis[n]<<nl;
	// }

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