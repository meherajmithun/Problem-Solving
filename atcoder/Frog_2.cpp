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
vector<int>dp(N, -1), v(N);
int n,k;

int call(int i){
    if(i==n-1) return 0;
    if(dp[i]!=-1) return dp[i];
    int ans = INT_MAX;

    for(int j=1; j<=k; j++){
        if(i+j==n) break;
        ans = min(ans, abs(v[i]-v[j+i])+call(i+j));
    }

    dp[i] = ans; return dp[i];
}

void solve() {
    cin>>n>>k;
    for(int i=0; i<n; i++) cin>>v[i];
    cout<<call(0)<<nl;
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