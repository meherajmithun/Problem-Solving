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
const int mod = 32768;

void solve() {
	int n; cin>>n;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		int src=a;
		queue<int>q; q.push(src);
		vector<int>level(mod+123, 0); vector<int>visited(mod+123, 0);
		level[src] = 0; visited[src]=1;
		while(!q.empty()){
			int u = q.front(); q.pop();
			if(u==0) break;
			int x = (u+1) % mod;
			if(!visited[x]) {q.push(x); level[x] = level[u]+1; visited[x] = 1;}
			int y = (2L*u)%mod;
			if(!visited[y]) {q.push(y); level[y] = level[u]+1; visited[y]=1;}
			// cout<<u<<" -> "<<x<<" "<<y<<nl;
		}
		cout<<level[0]<<" ";
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