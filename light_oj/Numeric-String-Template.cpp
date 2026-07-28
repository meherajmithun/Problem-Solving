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
   	vector<int>v;
   	for(auto [a,b] : mp) v.push_back(b);
   	sort(v.begin() , v.end());
   	int m; cin>>m;
   	while(m--){
   		string s; cin>>s;
   		if((int)s.size()!=n){
   			cout<<"NO\n"; continue;
   		}
   		map<char,int>mp2;
   		vector<int>c;
   		for(auto a : s) mp2[a]++;
   		for(auto [a,b] : mp2) c.push_back(b);
   		sort(c.begin() , c.end());
   		if(c==v) cout<<"YES\n";
   		else cout<<"NO\n";
   	}

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