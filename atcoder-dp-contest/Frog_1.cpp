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
int n;
vector<int>dp(N, -1),v(N);

int call(int i){
    if(i==n-1) return 0;
    if(dp[i]!=-1) return dp[i];
    int way1 = abs(v[i]-v[i+1]) + call(i+1);
    if(i+2<n){
        int way2 = abs(v[i]-v[i+2]) + call(i+2);
        way1 = min(way1, way2);
    }
    dp[i] = way1;
    return dp[i];
}

void solve() {
    cin>>n;
    for(int i=0; i<n; i++) cin>>v[i];
    cout<<call(0)<<'\n';
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