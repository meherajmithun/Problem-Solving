#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = (ll) 3e7 + 5;
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
for(int i=0; i<100; i++) cout<<primes[i]<<" ";
}

int main(){
    sieve();

}