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
const int N = 1000000000;
#define mod 1000000007
int dp[N];

int fibo(int n){
    if(n<2) {dp[n]=n; return dp[n];}
    if(dp[n]) return dp[n];
    dp[n] = (fibo(n-1)%mod+fibo(n-2)%mod)%mod;
    return dp[n];
}

void solve(){
    int n; cin>>n;
    cout<<fibo(n)<<nl;
}

int32_t main(){
    fast
    int tc=1; //cin >> tc;
    while(tc--){
        solve();
    }
}