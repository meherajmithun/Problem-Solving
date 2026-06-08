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
   priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
   vector<vector<int>> sp(n + 1);
   q.push({0, 1});
   while (!q.empty()) {
       auto [d, u] = q.top(); q.pop();
       if ((int)sp[u].size() >=3) continue;
       sp[u].push_back(d);
       for (auto [v, w] : adj[u]) {
           q.push({d+w, v});           
       }
   }
   int ans = sp[n][0];
   for(auto a : sp[n]){
   	if(a!=ans){
   		cout<<a<<nl; return;
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