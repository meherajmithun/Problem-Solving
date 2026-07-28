// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve(){
	int x,y; cin>>x>>y;
	int a = x/2;
	int b = a;
	if(x&1) b++;

	// cout<<a<<" "<<b<<nl;

	int m=0,n=0;
	for(int i=1; i<=sqrt(y); i++){
		if(y%i==0){
			m=i; n = y/i;
		}
	}
	// cout<<m<<" "<<n<<nl;

	if(a>n or b<m){
		cout<<a<<" "<<b<<nl;
		cout<<m<<" "<<n<<nl;
	}
	else cout<<"-1\n";

}

int32_t main(){
	fast
	int tc; cin >> tc;
	while(tc--){
		solve();
	}
}