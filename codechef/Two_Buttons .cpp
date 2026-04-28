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
const int N = 20005+123;
vector<int>visited(N, 0), level(N, 0);

void solve() {
	int n,m; cin>>n>>m;

	queue<int>q; q.push(n);
	visited[n]=1; level[n]=0;
	while(!q.empty()){
		int u = q.front(); q.pop();
		int x = u*2;
		if(x<=N){
			if(!visited[x]){
				q.push(x); visited[x]=1; level[x] = level[u]+1;
			}
		}
		int y = u-1;
		if(y>0 and !visited[y]){
			q.push(y); visited[y]=1; level[y] = level[u]+1;
		}
		// cout<<u<<" ";
	}
	cout<<level[m]<<nl;
	// for(int i=1; i<=m; i++) cout<<level[i]<<" "; cout<<nl;
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