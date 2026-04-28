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
	string a,b; cin>>a>>b;
	vector<int>dp(n, INT_MAX);

	for(int i=0; i<n; i++){
		dp[i] = (a[i]!=b[i]);
		if(i>0) dp[i] += dp[i-1];
		if(i>0){
			int x = 0;
			if(i>1) x=dp[i-2];
			dp[i] = min(dp[i], (a[i]!=a[i-1]) + (b[i]!=b[i-1])+x);
		}
	}
	cout<<dp[n-1]<<nl;
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