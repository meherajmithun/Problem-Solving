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
#define MOD 998244353
const int N = 1000005;
int fact[N];

void factorial(){
    fact[1]=1;
    for(int i=2; i<N; i++){
        fact[i] = ((fact[i-1]%MOD)*(i%MOD))%MOD;
    }
    // for(int i=1; i<10; i++) cout<<fact[i]<<" "; cout<<nl;
}

int f(int n){
    if(n==1) return 0;
    return n*((fact[n-1]-1)%MOD+(f(n-1)%MOD)%MOD)%MOD;
}


void solve(){
    int n; cin>>n;
    cout<<(fact[n]%MOD+f(n)%MOD)%MOD;
}   

int32_t main(){
    factorial();
    fast
    int tc=1; //cin >> tc;
    while(tc--){
        solve();
    }
}