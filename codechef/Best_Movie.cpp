//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n; cin>>n;
    vector<pair<int,int>>vp(n);
    int ans = INT_MAX;
    for(int i=0; i<n; i++){
        int a,b; cin>>a>>b;
        if(a>=7) ans = min(ans,b);
    }
    if(ans == INT_MAX) ans = -1;
    cout<<ans<<endl;
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