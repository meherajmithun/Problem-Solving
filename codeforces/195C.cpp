// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k; cin>>n>>k;
    vector<int>v(n),pre(n+1, 0);
    for(auto &a : v) cin>>a;
    for(int i=1; i<=n; i++){
    	pre[i] = (pre[i-1] + v[i-1]) % k;
    }
    // for(auto a : pre) cout<<a<<" "; cout<<nl;
    int ans = 0; map<int,int>mp;
	for(int i=1; i<=n; i++){
		if(i>k) mp[pre[i-k-1]]++;
		ans += mp[pre[i]];
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