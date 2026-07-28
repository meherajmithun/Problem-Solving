// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace __gnu_pbds;
template <class T> using ordered_set= tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

void solve() {
	int n; cin>>n;
	vector<pair<int,int>>cs(n);
	for(auto &[a,b] : cs) cin>>a>>b;
	sort(all(cs));
	// for(auto [a,b] : cs) cout<<a<<" "<<b<<nl;
	ordered_set<int>st;
	for(auto [a,b] : cs) st.insert(b);
	int ans = 0;
	for(auto [a,b] : cs){
		ans += st.order_of_key(b);
		st.erase(b);
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