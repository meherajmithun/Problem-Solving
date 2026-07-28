// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
const int N = 100000+123;

void solve() {
    int n; cin>>n;
    vector<int>v(n),dp(N+123, INT_MAX);
    int g = 0;
    for(auto &a : v){
        cin>>a; g = gcd(a,g);
    }
    // cout<<g<<nl;
    for(auto a : v){
        dp[a] = 0;
    }
    if(dp[g]==0){
        int ans = 0;
        for(auto a : v){
            if(a!=g) ans++;
        }
        cout<<ans<<nl; return;
    }
    
    for(int i=N-1; i>0; i--){
        if(dp[i]<INT_MAX){
            for(auto a : v){
                int j = gcd(i,a);
                dp[j] = min(dp[j], dp[i]+1);
            }
        }
    }
    // cout<<dp[g]<<nl;
    cout<<dp[g]+(n-1)<<nl;


}

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}