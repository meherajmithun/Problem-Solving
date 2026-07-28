// IN THE NAME OF ALLAH
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pii pair<int,int>
const int N = 2e5+123;

void solve() {
	int n,m,k; cin>>n>>m>>k;
	vector<pii>adj[n+123];
	for(int i=0; i<m; i++){
		int u,v,w; cin>>u>>v>>w;
		adj[u].push_back({v,w});
	}
	priority_queue<pii, vector<pii>,greater<pii>>pq;
	priority_queue<int>dis[n+1];
	pq.push({0,1});
	dis[1].push(0);
	while(!pq.empty()){
		pii f = pq.top(); pq.pop();
		int u,d;
		tie(d,u) = f;
		if(dis[u].top()<d) continue;
		for(auto [v, w]: adj[u]){
			int nd = d+w;
			if((int) dis[v].size()<k){
				dis[v].push(nd);
				pq.push({nd, v});
			}
			else{
				if(dis[v].top()>nd){
					dis[v].pop(); dis[v].push(nd);
					pq.push({nd, v});
				}
			}
		}
	}
	vector<int>ans;
	while(!dis[n].empty()){
		ans.push_back(dis[n].top()); dis[n].pop();
	}
	reverse(all(ans));
	for(auto a: ans) cout<<a<<" "; 
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