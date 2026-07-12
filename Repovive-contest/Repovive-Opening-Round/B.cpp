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
	vector<int>v(n);
	for(auto &a : v) cin>>a;
	int ans = 0;
	for(int i=0; i<n; i++){
		int cur = v[i];
		for(int j=i+1; j<n; j++){
			if(v[i]<v[j] and (cur<=v[i] or cur > v[j])){
				ans++;
				if(cur==v[i]) cur = v[j];
				else cur = min(cur, v[j]);
			}
		}
		// cout<<ans<<nl;
	}
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