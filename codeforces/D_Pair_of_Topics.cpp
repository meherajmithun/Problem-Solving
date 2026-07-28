//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n; cin>>n;
    vector<int>v(n),v2(n);
    for(auto &u : v) cin>>u;
    for(auto &u : v2) cin>>u;
    vector<int>c(n),d(n);

    for(int i=0; i<n; i++){
        c[i] = v[i]-v2[i];
        d[i] = v2[i]-v[i];
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        if(c[i] > d[i]){
            ans--;
        }
    }
    sort(c.begin() , c.end());
    for(int i=0; i<n; i++){
        ans += n-(upper_bound(c.begin() , c.end() , d[i])-c.begin());
    }
    
    print(ans/2);

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}