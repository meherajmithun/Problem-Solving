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
#define ll long long
using namespace std;
const ll N = (ll) 3e7 + 5;
bitset<N>isPrime;
vector<ll> primes;

void sieve(){
    isPrime[2]=1;
    for(int i=3;i<=N;i+=2) {
        isPrime[i]=1;
    }
    for(ll i=3;i*i<=N;i+=2) {
        if(isPrime[i])
    for(int j=i*i;j<=N;j+=i+i) {
            isPrime[j]=0;
        }
    }
    // isprime[2]=1;
    primes.push_back(2);
    for(int i=3;i<N;i+=2) {
        if(isPrime[i])
            primes.push_back(i);
    }
}

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    sort(all(v));
    int z = v[n-1];
    auto it = lower_bound(all(primes),z)-primes.begin();
    cout<<primes[it-1]<<nl;  
}

int32_t main(){
    fast
    sieve();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}