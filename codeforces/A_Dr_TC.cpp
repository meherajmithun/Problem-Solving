#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'

void solve(){
    int n; cin>>n;
	string s; cin>>s;
    int cnt = 0;
    for(int i=0; i<(int)s.size(); i++){
        if(s[i] == '1') cnt++;
    }
    int ans = n * cnt + (n - 2 * cnt);
    cout<<ans<<endl;
}

int32_t main(){
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}