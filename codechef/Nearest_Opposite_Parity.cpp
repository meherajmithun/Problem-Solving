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
	int n; cin>>n;
	vector<int>cs(n+1);
	vector<int>adj[n+1];
	for(int i=1; i<=n; i++){
		int a; cin>>a;
		cs[i]=a;
		if(i-a>0) adj[i-a].push_back(i);
		if(i+a<=n) adj[i+a].push_back(i);
	}
	// for(int i=1; i<=n; i++){
	// 	for(auto a : adj[i]) cout<<a<<" "; cout<<nl;
	// }
	queue<int>q,q2;
	vector<int>vis(n+1, 0),vis2(n+1, 0), level2(n+1, -1), level(n+1, -1);
	for(int i=1; i<=n; i++){
		if(cs[i]&1){
			q.push(i); vis[i]=1; level[i]=0;
		}
		else{
			q2.push(i); vis2[i]=1; level2[i]=0;
		}
	}
	while(!q.empty()){
		int u = q.front(); q.pop();
		for(auto v : adj[u]){
			if(vis[v]) continue;
			q.push(v); vis[v]=1; level[v] = level[u]+1; 
		}
	}
	while(!q2.empty()){
		int u = q2.front(); q2.pop();
		for(auto v : adj[u]){
			if(vis2[v]) continue;
			q2.push(v); level2[v] = level2[u]+1; vis2[v] = 1;
		}
	}
	for(int i=1; i<=n; i++){
		if((cs[i]&1)){
			cout<<level2[i]<<" ";
		}
		else cout<<level[i]<<" ";
	}

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