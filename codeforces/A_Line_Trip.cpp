#include<bits/stdc++.h>
using namespace std;

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}
void solve(){
	int n,k; cin >> n >> k;
	vector<int>v(n);
	for(auto &u : v) cin >> u;
	
	int mx = v[0];
	for(int i=1; i<n; i++){
		if(mx < (v[i]-v[i-1])){
			mx = v[i]-v[i-1];
		}
	}
	int tmp = 2*(k-v[n-1]);
	if(mx < tmp) mx = tmp; 
	cout<<mx<<endl;
	//cout<<*max_element(v.begin() , v.end())<<endl;
}
int main(){
	optimize();
	int tc; cin >> tc;
	while(tc--){
		solve();
	}
}