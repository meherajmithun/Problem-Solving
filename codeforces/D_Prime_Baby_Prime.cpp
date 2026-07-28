//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    map<int,int>mp;
    for(int i=0; i<n; i++){
        mp[v[i]] = max(mp[v[i]] , i+1);
    }   
    int mx = INT_MIN;
    for(auto u : mp){
    
        int a = u.first;
        int b = u.second;
    
        for(auto q : mp){
            int c = q.first;
            int d = q.second;
            if(__gcd(a,c) == 1){
                mx = max(mx,b+d);
            }

        }
    }
    if(mx == INT_MIN) mx = -1;
    print(mx);
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