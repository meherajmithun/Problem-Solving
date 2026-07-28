#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    iota(v.begin(), v.end(),1);
    vector<pair<int,int>>vp;
    int i=1;
    while(i<n){
    	int a = v[v.size()-1];
    	int b = v[v.size()-2];
    	v.pop_back(); v.pop_back();
    	int x = (a+b)/2;
    	if((a+b)%2!=0) x++;
    	v.push_back(x);
    	i++;
    	vp.push_back({a, b});
    }
    cout<<v[0]<<endl;
    for(auto [a,b] : vp) cout<<a<<" "<<b<<endl;
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