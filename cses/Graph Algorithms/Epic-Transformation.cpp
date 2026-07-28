#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    map<int,int>mp;
    for(int i=0; i<n; i++){
    	int a; cin>>a;
    	mp[a]++;
    }
    // for(auto [a,b] : mp) cout<<a<<" "<<b<<endl;
    // cout<<endl<<endl;
	vector<int>cs;
	for(auto [a,b] : mp) cs.push_back(b);
	for(auto a : cs) cout<<a<<" "; cout<<endl<<endl;
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