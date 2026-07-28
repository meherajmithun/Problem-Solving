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
	vector<int>binary;
	while(n>0){
		binary.push_back(n%2);
		n /= 2;
	}
	binary.push_back(0);
	reverse(all(binary));
	for(auto a : binary) cout<<a<<" "; cout<<nl;
	next_permutation(all(binary));
	for(auto a : binary) cout<<a<<" "; cout<<nl;
	int res = 0;
	for(auto a : binary){
		res = res*2+a;
	}
	cout<<res<<nl;

}
int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    int w = 1;
    while (tc--) {
        cout << "Case " << w++ << ": ";
        solve();
    }
    return 0;
}