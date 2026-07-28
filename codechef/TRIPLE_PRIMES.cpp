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
const ll N = (ll) 3e6 + 5;
bitset<N> isPrime;
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
primes.push_back(2);
for(int i=3;i<N;i+=2) {
    if(isPrime[i])
        primes.push_back(i);
}
}

int sq(int a){
    return a*a;
}

void solve(){
    int n; cin>>n;
    for(int i=0; primes[i]<n; i++){
        for(int j=i+1; primes[j]<n; j++){
            for(int k=j+1; primes[k]<n; k++){
                if(sq(primes[i])+sq(primes[j])+sq(primes[k]) == n){
                    print("YES");
                    return;
                }
            }
        }
    }
    cout<<"NO\n";
}

int32_t main(){
    fast
    sieve();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}