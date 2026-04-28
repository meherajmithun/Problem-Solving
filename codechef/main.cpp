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
	vector<string>cs(2);
	for(auto &a : cs) cin>>a;
	// for(auto a : cs) cout<<a<<nl;
	if(n==1){
		if(cs[0][0]==cs[1][0]){
			cout<<"0\n";
		}
		else cout<<"1\n";
		return;
	}
	bool jamela = 0;
	int r=0,b=0, idx=0;
		for(int j=0; j<n; j++){
			// cout<<j<<" ";
			if(jamela and idx<=j){
				if(cs[0][j]=='R') r++;
				if(cs[1][j]=='R') r++;
				if(cs[0][j]=='B') b++;
				if(cs[1][j]=='B') b++;
				continue;
			}
			if(cs[0][j+1]!=cs[0][j] and cs[0][j]!=cs[1][j]){
				jamela=1; idx=j;
				if(cs[0][j]=='R') r++;
				if(cs[1][j]=='R') r++;
				if(cs[0][j]=='B') b++;
				if(cs[1][j]=='B') b++;
				continue;
				// else b++;
			}
			// else j++;
			// cout<<j<<" ";
			// cout<<b<<" "<<r<<nl;
		}
		if(jamela) cout<<min(r,b)<<nl;
		else cout<<"0\n";
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