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
const int N = 3e6;
#define mod 1000003
vector<int>fact(N,1);

void factorial(){
    for(int i=2; i<N; i++){
        fact[i] = (fact[i-1]*i)%mod;
    }
    // for(int i=1; i<10; i++) cout<<fact[i]<<" "; cout<<nl;
}
int big_mod(int a, int b){
    int ans = 1;
    while(b>0){
        if(b&1) ans = (ans*a)%mod;
        a = (a*a)%mod;
        b >>= 1;
    }
    return ans;
}

void solve() {
    int n,k; cin>>n>>k;
    if(k==0){
        cout<<"1\n"; return;
    }
    int x = (fact[k]*fact[n-k])%mod;
    int y = big_mod(x,mod-2);
    cout<<(fact[n]*y) % mod<<nl;
}

int32_t main() {
    fast
    factorial();
    int tc = 1;
    cin >> tc;
    int w = 1;
    while (tc--) {
        cout<<"Case "<<w++<<": ";
        solve();
    }
    return 0;
}