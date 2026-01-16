#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'

void solve(){
	int n,x; cin>>n>>x;
    vector<int>v;
    // for(int i = x; i<n; i++){
    //     v.push_back(i);
    // }
    for(int i=0; i<n; i++){
        if(i == x) continue;
        v.push_back(i);
    }
    if(x<n) v.push_back(x);
    for(auto u : v) cout<<u<<" ";
    cout<<endl;
}

int32_t main(){
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}