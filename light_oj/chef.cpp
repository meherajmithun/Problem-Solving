#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    for(int i=0; i<n-k; i++){
    	if(s[i]=='-' or s[i]!=s[i+k]) continue;
    	bool f = 0;
    	for(int j=i+1; j<n; j++){
    		if(s[i]!=s[j]){
    			swap(s[j], s[i+k]);
    			s[i+k] = '-';
    			f=1;
    		}
    	}
    	if(!f) {
    		cout<<"No\n"; return;
    	}
    }
    cout<<"Yes\n";
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