//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define INT_MAX LLONG_MAX
#define INT_MIN LLONG_MIN
#define mod 1000000007

void solve() {
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    // for(auto u : v) cout<<u;
    // cout<<endl;
    int ans = 0;
    if(k == 1){
        for(int i=0; i<n-1; i++){
            ans = max(ans,v[i]+v[n-1]);
        }        
        for(int i=1; i<n; i++){
            ans = max(ans,v[i]+v[0]);
        }
        print(ans);
        return;
    }
    sort(v.rbegin() , v.rend());
    int nisi = 0 , i=1;
    while(nisi != k){
        ans += v[i];
        i++,nisi++;
    }
    ans += v[0];
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