#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
	int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    sort(v.begin() , v.end());
    int x = unique(v.begin() , v.end())-v.begin();
    cout<<x<<endl;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int tc = 1; cin>>tc;
	while(tc--){
		solve();
	}
}