#include<bits/stdc++.h>
using namespace std;
#define ll long long

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}
int main(){
	optimize();
	int n; cin >> n;
	vector<ll>v(n);
	for(auto &u : v) cin >> u;
	vector<ll>pre(n+1);
	ll ans = INT_MIN,mx = INT_MIN;
	for(int i=0; i<n; i++){
		mx = max(v[i] , mx+v[i]);
		ans = max(ans,mx);
	}
	cout<<ans<<endl;
}