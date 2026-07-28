#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    int l=1,r=n;
	int i=0;
	while((i<n and v[i]==l) or (v[n-i-1]==r)){
		i++; l++;
	}
	i=0;
	while((i<n and v[i]==r) or (v[n-i-1]==r)){
		i++; r--;
	}
	cout<<l<<" "<<r<<endl;
	
	// i=0; l=n, r=1;
	// while(i<n){
	// 	if(l==r){
	// 		cout<<-1<<endl; return;
	// 	}
	// 	if(v[i]!=l and v[i]!=r) break;
	// 	if(v[i]==r) r++;
	// 	if(v[n-i-1]==l) l--;
	// 	i++;
	// }
	// cout<<l<<" "<<r<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}