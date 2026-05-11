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
	vector<int>a(n),b(n);
	for(auto &a : a) cin>>a;
	for(auto &a : b) cin>>a;
	map<pair<int,int>,int>mp;
	int cnt = 0;
	for(int i=0; i<n; i++){
		if(a[i]==0 and b[i]!=0) continue;
		if(a[i]==0 and b[i]==0){
			cnt++;
			continue;
		}
		mp[{-b[i]/__gcd(a[i],b[i]),  a[i]/__gcd(a[i],b[i])}]++;
	}
	int ans = 0;
	// for(auto [a,b] : mp) cout<<a.first<<" "<<a.second<<" -> "<<b<<nl;
	for(auto [a,b] : mp) ans = max(ans,b);
	cout<<(ans+cnt)<<nl;
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


Rubel
break 1 pis invoice missing
Vitamin C big 1 pis invoice missing
