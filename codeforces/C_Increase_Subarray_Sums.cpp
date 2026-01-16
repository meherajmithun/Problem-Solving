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
    int n,x; cin>>n>>x;
    vector<int>v(n+1);
    for(int i=1; i<n+1; i++){
        cin>>v[i];
    }   
    vector<int>pre(n+1);
    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1] + v[i];
    }
    // for(auto u : pre) cout<<u<<" ";
    // cout<<endl;

    int ans = 0;
    for(int i=0; i<=n; i++){
        int mn = 0;
        for(int j=i; j<=n; j++){
            mn = min(mn,pre[j-i]);
            ans = max(ans, pre[j]-mn+x*i);
        }
        cout<<ans<<" ";
    }
    cout<<endl;

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