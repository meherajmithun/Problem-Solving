#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
	string s; cin>>s;
    int n = (int)s.size();
    int cnt = 0;
    for(int i=0; i<n-1; i++){
        if(s[i] != s[i+1] or s[i] != '0') cnt++;
    }
    if(s[n-1] == '0' and s[n-2] == '0') cnt++;
    cout<<cnt<<endl;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}