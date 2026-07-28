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
	map<int,int>mp;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		mp[a]++;
	}
	priority_queue<int>pq;
	for(auto [a,b] : mp) pq.push(b);
	if(sz(pq)==1){
		cout<<n<<nl; return;
	}
	while(!pq.empty()){
		// cout<<pq.top()<<" "; pq.pop();
		int a = pq.top(); pq.pop();
		if(pq.empty()) {
		    pq.push(a); break;
		}
		int b = pq.top(); pq.pop();
// 		cout<<a<<" "<<b<<" ";
		a--; b--;
		if(a>0) pq.push(a);
		if(b>0) pq.push(b);
		
	}
	if(sz(pq)==0){cout<<"0\n"; return;}
	cout<<pq.top()<<nl;
}
int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    int w = 1;
    while (tc--) {
        //cout << "Case " << w++ << ": ";
        solve();
    }
    return 0;
}