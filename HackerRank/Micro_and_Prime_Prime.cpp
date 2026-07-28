#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
const ll n = (ll) 3e6+5;
const ll mod = (ll) 1e9+7;
const ll inf = (ll) 1e18;

bitset<n>isprime;
vector<ll>prime;

void sieve() {
    for (int i = 3; i <= n; i += 2) {
        isprime[i] = true;
    }
    isprime[2]=1;
    for (int i = 3; i * i <= n; i += 2) {
        if (isprime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isprime[j] = false;
            }
        }
    }
    prime.push_back(2); // 2 is the only even prime
    for (int i = 3; i <= n; i += 2) {
        if (isprime[i]) {
            prime.push_back(i);
        }
    }
    // for(int i=0; i<100; i++) cout<<prime[i]<<" "; cout<<'\n';
}

int nc2(int n){
    if(n==0) return 0;
    return n*(n-1)/2;
}
void solve(){
    int l,r; cin>>l>>r;
    int cnt = 0;
    int L = upper_bound(prime.begin() , prime.end(),l-1)-prime.begin();
    int R = lower_bound(prime.begin() , prime.end(),r)-prime.begin();

    cout<<R-L<<'\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    sieve();
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}