#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n';

void solve(){
	int n,x; cin>>n >> x;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    map<int,int>mp;
    vector<int>pre(n+2);
    mp[0] = 1;
    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1] + v[i];
        mp[pre[i]]++;
    }
    int ans = 0;
    for(int i=1; i<=n; i++){
        int dorkar = pre[i]-x;
        ans += mp[dorkar];
    }
    print(ans);
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int tc = 1;// cin>>tc;
	while(tc--){
		solve();
	}
}

