#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
	int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int sum = 0;
    for(int i=0; i<n; i+=2){
        sum += v[i];
    }
    cout<<sum<<endl;
}

int32_t main(){
	int tc = 1; //cin>>tc;
	while(tc--){
		solve();
	}
}