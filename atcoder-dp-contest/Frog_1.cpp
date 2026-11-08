// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
const int N = 100000+123;
vector<int>v(N), dp(N, -1);
int n,k; 

int fun(int i){
    if(i==n-1) return 0;
    if(dp[i]!=-1) return dp[i];

    int x = INT_MAX;
    for(int j=1; j<=k; j++){
        if(i+j>n-1) break;
        int y = fun(i+j)+abs(v[i]-v[j+i]);
        // cout<<x<<" "<<y<<nl;
        x = min(x,y);
    }
    dp[i] = x;
    return dp[i];
}

void solve() {
    cin>>n>>k;
    for(int i=0; i<n; i++) cin>>v[i];
    cout<<fun(0);
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