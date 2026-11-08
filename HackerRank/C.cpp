// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve(){
    string a,b; cin>>a>>b;
    int n = sz(a), m = sz(b);
    // cout<<n<<" "<<m<<nl;
    vector<vector<int>> dp(n + 123, vector<int>(m + 123));
    for(int i=0; i<=m; i++){
        dp[0][i] = i;
    }   
    for(int i=0; i<=n; i++){
        dp[i][0] = i;
    }   
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = dp[i-1][j-1];
                // cout<<dp[i][j]<<" ";
            }
            else{
                int x = dp[i-1][j];
                int y = dp[i][j-1];
                int z = dp[i-1][j-1];
                // cout<<x<<" "<<y<<" "<<z<<nl;
                dp[i][j] = min({x,y,z})+1;

            }
        }
    }
    cout<<dp[n][m]<<nl;
}

int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}