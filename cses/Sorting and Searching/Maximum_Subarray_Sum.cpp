#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
	int n; cin>>n;
	vector<ll>v(n+1);
	for(int i=1; i<=n; i++){
		cin>>v[i];
	}
	vector<ll>pre(n+1);
 
	for(int i=1; i<=n; i++){
		pre[i] = pre[i-1] + v[i];
	}
	ll min_prefix_sum = 0;
	ll mx = v[1];
 
	for(int i=1; i<= n; i++){
		mx = max(mx , pre[i]-min_prefix_sum);
		min_prefix_sum = min(min_prefix_sum , pre[i]);
	}
	cout<<mx<<'\n';
}