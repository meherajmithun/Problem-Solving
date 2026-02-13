// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;
#define mod 1000000007
const int N = 2000+5;
int dp[N][N], vis[N][N];
vector<vector<int>>divv(N);

void pre(){
    for(int i=1; i<N; i++){
        for(int j=i; j<N; j+=i){
            divv[j].push_back(i);
        }
    }
    // for(int i=1; i<20; i++){
    //     cout<<i<<" -> ";
    //     for(auto a : divv[i]) cout<<a<<" "; cout<<nl;
    // }

}

int call(int j, int i){
    if(i==1) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    int res = 0;
    for(auto a : divv[j]){
        res += call(a,i-1);
        res %= mod;
    }
    dp[i][j] = res;
    return dp[i][j];
}


void solve(){
    memset(dp, -1, sizeof(dp));
    pre();
    int n,k; cin>>n>>k;

    for(int i=1; i<=n; i++){
        dp[1][i] = 1;
    }
    int ans = 0;
    for(int i=1; i<=n; i++){
        ans += call(i,k);
        ans %= mod;
    }

    // int ans =0;
    // for(int i=1; i<=n; i++){
    //     ans += dp[k][i];
    // }
    cout<<ans;


}

int32_t main(){
    fast
    int tc=1;
    // cin >> tc;
    int C = 1;
    while(tc--){
        // cout << "Case " << C++ << ": ";
        solve();
    }
}