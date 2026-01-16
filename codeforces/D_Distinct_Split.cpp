//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    map<char,int>mp;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }
    map<char,int>mp2;
    int ans = 0;
    for(auto u : s){
        mp[u]--;
        mp2[u]++;
        if(mp[u] == 0){
            mp.erase(u);
        }
        
        int a = mp.size();
        int b = mp2.size();
        ans = max(ans,(a+b));
    }
    print(ans);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}