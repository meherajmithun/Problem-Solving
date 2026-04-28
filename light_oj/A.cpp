#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
const int mod = 676767677;

void solve() {
	int n; cin>>n;
	vector<int>v(n);
	for(auto &a : v) cin>>a;
	int ans = 0,cnt=0;
	for(int i=0; i<n; i++){
		if(v[i]==1){
			cnt++;
		}
		else ans = (ans+v[i])%mod;
	}
	if(cnt==1) ans=(ans+1)%mod;
	if(cnt>1 and ans==0) ans= 1;
	cout<<ans<<nl;

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