#include<bits/stdc++.h>
using namespace std;

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}

void solve(){
	int n; cin >> n;
	vector<int>v(n);
	for(auto &u : v) cin >> u;
	int ans = v[0];
	for(int i=1; i < n; i++){
		ans &= v[i];
	}
	cout<<ans<<endl;
}
int main(){
	optimize();
	int tc; cin >> tc;
	while(tc--){
		solve();
	}
}