#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n';

void solve(){
	int n,k ; cin>>n>>k;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    // if(k == 0){
 
    sort(v.begin(),v.end());
    int t = n-k;
    int mn = LLONG_MAX,mx = LLONG_MIN;
    for(int i=0; i<=k; i++){
        int b = (2*i)+t-1;
        mn = min(mn,v[b/2]);
        mx = max(mx, v[(b+1)/2]);
    }
    print(mx-mn+1);

}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}