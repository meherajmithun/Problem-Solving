#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n,m;
	cin>>n>>m;
	vector<ll>v(n),v2(m);
	for(auto &u : v) cin>>u;
	for(auto &u : v2) cin>>u;

	ll l=0,s=0;
	for(int i=0; i<m; i++){
		ll k = v2[i];
		while(s+v[l] < k){
			s+=v[l];
			l++;
		}
		cout<<l+1<<" "<<k-s<<'\n';
	}

}