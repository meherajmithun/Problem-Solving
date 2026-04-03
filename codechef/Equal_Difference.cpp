#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define nl '\n'
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;


void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    vector<int>a(n),b(n);
	for(int i=0; i<n; i++){
		a[i] = v[i]-(i+1);
		b[i] = v[i]-(i+1);
	}
	// for(auto x : a) cout<<x<<" "; cout<<nl;
	// for(auto x : b) cout<<x<<" "; cout<<nl;

	map<int,int>mp;
	int ans = 0;
	for(auto u : a){
		if(mp[u]!=0){
			ans += mp[u];
			// cout<<u<<" "<<mp[u]<<nl;
		} 
		mp[u]++;
	}
	cout<<ans<<nl;
    
}
int32_t main(){
    fast int t=1, w=1; 
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}