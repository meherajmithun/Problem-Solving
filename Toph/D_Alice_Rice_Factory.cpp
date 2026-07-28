#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<<x<<'\n';

void solve(){
	int n,m; cin >> n >> m;
	vector<int>v(n);
	for(auto &u : v) cin>>u;
	multiset<int>ms;
	for(int i=0; i<m; i++) ms.insert(v[i]);

	for(int i=m; i<n; i++){
		int k = v[i];
		auto it = ms.begin();
		ms.erase(it);
		ms.insert(k + *it);
	}
	auto it = ms.end();
	it--;
	print(*it);
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		solve();
	}
}