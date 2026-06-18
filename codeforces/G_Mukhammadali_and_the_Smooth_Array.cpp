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

void solve() {
    int n; cin>>n;
    vector<int>a(n),c(n);
    for(auto &a : a) cin>>a;
    for(auto &a : c) cin>>a;
    vector<vector<int>>dp(n, vector<int>(2,INT_MAX));

    dp[0][0]=0; dp[0][1]=c[0];
    // cout<<dp[0][0]<<" "<<dp[0][1]<<nl;


    for(int i=1; i<n; i++){
        
        if(a[i-1]<=a[i]){
            dp[i][0] = min(dp[i][0], dp[i-1][0]);
            // cout<<dp[i][0]<<" ----> ";
        }
        dp[i][0] = min(dp[i][0], dp[i-1][1]);

        dp[i][1] = min(dp[i][1], dp[i-1][0]+c[i]);
        dp[i][1] = min(dp[i][1], dp[i-1][1]+c[i]);

    }
    cout<<min(dp[n-1][0], dp[n-1][1])<<nl;

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