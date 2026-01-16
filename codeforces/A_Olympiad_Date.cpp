#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
	int n; cin>> n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    
    map<int, int> mp;
    mp[0] = 3;
    mp[1] = 1;
    mp[2] = 2;
    mp[3] = 1;
    mp[5] = 1;
    
    map<int, int> mp2;
    int ans = 0;
    
    bool gese = true;

    for (int i = 0; i < n; i++) {
        mp2[v[i]]++;
        
        gese = true;
        for (auto& [digit, count] : mp) {
            if (mp2[digit] < count) {
                gese = false;
                break;
            }
        }
        
        if (gese) {
            ans = i + 1;
            cout<<ans<<'\n';
            return;
        }
    }
    
    cout << ans << endl;
}

int32_t main(){
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}