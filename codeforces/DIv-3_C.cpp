// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vector<int>v(n),cs(n, 0);
    for(auto &a : v) cin>>a;

    for(int i=0; i<n-4; i++){
    	cs[i] = v[i]+v[i+2] - v[i+4];
    }

    // for(auto a : cs) cout<<a<<" "; cout<<nl;

    int ans = 0;
	map<int,int>mp;
	for(int i=0; i<n-4; i++){
		ans += mp[cs[i]];
		if(i>=2 and cs[i-2] == cs[i]) ans--;
		if(i>=4 and cs[i-4] == cs[i]) ans--;
		
		mp[cs[i]]++;
	}
	cout<<ans<<nl;
}	

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}