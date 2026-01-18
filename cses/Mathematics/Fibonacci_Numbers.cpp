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
map<int,int>dp;
#define mod 1000000007

int fib(int n){
    if(dp[n]) return dp[n];
    if(n==0) return 0;
    if(n==1 or n==2) return 1;

    if(n&1){
        int k = (n+1)/2;
        int a = fib(k-1);
        int b = fib(k);
        return dp[n] =  ((1LL*a*a)%mod + (1LL*b*b)%mod)%mod;
    }
    else{
        int k = n/2;
        int a = fib(k-1);
        int b = fib(k);
        return dp[n] = (((2LL*a%mod+b%mod)%mod)*b)%mod;
    }
}


void solve(){
    int n; cin>>n;
    cout<<fib(n)<<nl;
}

int32_t main(){
    fast
    int tc=1; //cin >> tc;
    while(tc--){
        solve();
    }
}