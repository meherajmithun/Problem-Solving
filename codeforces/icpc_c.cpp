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
#define ll long long
#define MOD 10000007
const int INV2 = (MOD + 1) / 2;
const ll N = (ll) 3e6 + 5;
bitset<N+12> isPrime;
vector<ll> primes;

void sieve(){
    for(int i=3;i<=N;i+=2) {
        isPrime[i]=1;
    }
    for(ll i=3;i*i<=N;i+=2) {
        if(isPrime[i])
        for(int j=i*i;j<=N;j+=i+i) {
            isPrime[j]=0;
        }
    }
    isPrime[2]=1;
    primes.push_back(2);
    for(int i=3;i<N;i+=2) {
        if(isPrime[i])
            primes.push_back(i);
    }
}

inline int mul(int a, int b) {
    return (a % MOD) * (b % MOD) % MOD;
}


void solve(int n){
    int ans = 1;
    for (int p : primes) {
        if (p > n) break;
        int exp = 0, x = n;
        while (x > 0) {
            x /= p;
            exp += x;
        }
        int term = mul((exp + 1), (exp + 2));
        term = mul(term, INV2);
        ans = mul(ans, term);
    }
    cout<<ans%MOD<<nl;
}

int32_t main(){
    fast
    sieve();
    int tc=1;
    int n;// cin >> tc;
    while(cin>>n and n){
        solve(n);
    }
}