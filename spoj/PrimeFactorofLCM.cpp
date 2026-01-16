#include<bits/stdc++.h>
using namespace std;
#define ll  long long
const int N = 1e7+123;
bitset<N>isprime;
vector<int>prime;

void sieve(){
    for(int i = 3; i <= N; i += 2){
        isprime[i] = 1;
    }
    isprime[2] = 1;

    for(int i = 3; i <= sqrt(N); i += 2){
        if(isprime[i]){
            for(int j = (i * i); j <= N; j += (2 * i)){
                isprime[j] = 0;
            }
        }
    }
    prime.push_back(2);
    for(int i = 3; i <= N; i += 2){
        if(isprime[i]){
            prime.push_back(i);
        }
    }
}

void euler(ll n){
    ll res = n;
    for(ll i=0; prime[i]*prime[i] <= n; i++){
        if(n%prime[i] == 0){
            while(n%prime[i] == 0){
                n /= prime[i];
            }
            res -= (res/prime[i]);
        }
    }
    if(n>1) res -= (res/n);
    cout<<res<<'\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    sieve();
    while(1){
        ll n; cin>>n;
        if(n == 0) break;
        if(n == 1){
            cout<<"0\n";
        }
        else euler(n);
    }
}
