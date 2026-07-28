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
const int N = 200005;
vector<int>adj[N+123], ind(N+123, 0),top_order;

void top_sort(int n){
	priority_queue<int> q;
	for(int i=1; i<=n; i++){
		if(ind[i]==0){
			q.push(i);
		}
	}
	while(!q.empty()){
		int u = q.top(); q.pop(); top_order.push_back(u);
		for(auto v : adj[u]){
			ind[v]--;
			if(ind[v]==0) q.push(v);
		}
	}
}

void solve() {
	int n,m; cin>>n>>m;
	for(int i=0; i<m; i++){
		int u,v; cin>>u>>v;
		adj[v].push_back(u);
		ind[u]++;
	}

	top_sort(n); reverse(all(top_order));
	for(int i=0; i<n; i++) cout<<top_order[i]<<" "; cout<<nl;
	

}
int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    int w = 1;
    while (tc--) {
        //cout << "Case " << w++ << ": ";
        solve();
    }
    return 0;
}