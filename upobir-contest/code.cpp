// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

int call(int i, int n, vector<int>v, int sum1, int sum2){
	if(i==n) return abs(sum1-sum2);
	int group1 = call(i+1, n, v, sum1+v[i], sum2);
	int group2 = call(i+1, n, v, sum1, sum2+v[i]);

	return min(group1, group2);
}

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    cout<<call(0,n,v, 0,0)<<'\n';
}

int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}