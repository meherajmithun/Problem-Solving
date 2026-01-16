#include<bits/stdc++.h>
using namespace std;
#define ll long long

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}
void solve(){
	int n,k;
	cin >> n >> k;
	vector<ll>v(n);
	vector<ll>v2(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
		v2[i] = v[i];
	}
	if(n == k){
		reverse(v2.begin() , v2.end());
		if(is_sorted(v2.begin() , v2.end())){
			cout<<"YES"<<endl;
			return;
		}
	}

	if(is_sorted(v.begin() , v.end())){
		cout<<"YES"<<endl;
		return;
	}
	int l=1,r=0;
	while(l < n){
		if(v[l-1] > v[l] and (l-r+1) <= k){
			swap(v[l-1] , v[l]);
			r = l;
			l = 0;
		}
		r++;
		l++;
		if(is_sorted(v.begin() , v.end())){
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
}
int main(){
	optimize();
	int tc; cin >> tc;
	while(tc--){
		solve();
	}
}

///2 3 1
///2 1 3