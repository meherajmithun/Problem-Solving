#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
	int n,x; cin>>n>>x;
    vector<int>v(n);
    int sum = 0,mx = LLONG_MIN;
    for(int i=0; i<n; i++){
        cin>>v[i];
        sum += v[i];
        mx = max(mx,v[i]);
    }
    //cout<<sum<<endl;
    sort(v.rbegin() , v.rend());
    vector<int>ans;
    if(mx < 0 or sum < 0) mx = 0;
    ans.push_back(max(mx,sum));
    int sum2 = 0;
    for(int i=0; i<n; i++){
        v[i] += x;
        sum += x;
        mx = max(sum , max(mx,v[i]));
        if(mx < 0) mx = 0;
        ans.push_back(mx);
    }
    sort(ans.begin() , ans.end());
    for(auto u : ans) cout<<u<<" ";
    cout<<endl;



}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}