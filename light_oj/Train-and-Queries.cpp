// IN THE NAME OF ALLAH
// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
	int n,query; cin>>n>>query;
	map<int,vector<int>>mp;
	for(int i=0; i<n; i++){
	    int a; cin>>a;
	    mp[a].push_back(i+1);
	}
// 	for(auto [a,b] : mp){
// 	    cout<<a<<" -> ";
// 	    for(auto x : b) cout<<x<<" "; cout<<nl;
// 	}
	while(query--){
	    int a,b; cin>>a>>b;
	    int x = sz(mp[a]), y = sz(mp[b]);
	   // cout<<x<<" "<<y<<nl;
	    if(x==0 or y==0){
	        cout<<"NO\n"; continue;
	    }
	    int p = mp[a][0] , q=mp[b][y-1];
	   // cout<<p<<" "<<q<<nl;
	    if(p>q) cout<<"NO\n";
	    else cout<<"YES\n";
	}
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