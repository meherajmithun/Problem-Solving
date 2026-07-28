#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = (ll) 1e6 + 5;
#define nl '\n'
bitset<N> isPrime;
vector<ll> primes,prime;

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
    // for(auto u : primes){
    //     int k = u;
    //     bool bl = 0;
    //     while(k>0){
    //         if(k%10 == 0){
    //             bl=1;
    //             break;
    //         }
    //         k /= 10;
    //     }
    //     if(!bl) prime.push_back(u);
    // }
    // for(auto u : primes) cout<<u<<" "; cout<<nl;
    // for(auto u : prime) cout<<u<<" "; cout<<nl;
}

void solve(){
    int n; cin>>n;
    int cnt = 0;
    for(auto u : primes){
        if(u>n) break;
        else cnt++;
    }
    cout<<cnt<<nl;
}
int main(){
    sieve();
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}