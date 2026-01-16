#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = (ll) 1e3+123;
vector<ll>prime;
bitset<N>isprime;

void sieve(){
    for(int i=3; i<=N; i+=2){
        isprime[i] = 1;
    }
    isprime[2] = 1;
    for(ll i=3; i<=sqrt(N); i+=2){
        if(isprime[i]){
            for(ll j=i*i; j<=N; j+=(2*i)){
                isprime[j] = 0;
            }
        }
    }
    prime.push_back(2);
    for(int i=3; i<=N; i+=2){
        if(isprime[i]){
            prime.push_back(i);
        }
    }
    //for(int i=0; i<10; i++) cout<<prime[i]<<" ";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0) ; cout.tie(0);
    sieve();
    int tc; cin>>tc;
    while(tc--){
        int a,b; cin>>a>>b;
        int ans = 1;
        int k = __gcd(a,b);
        for(int i=0; prime[i]*prime[i] <= k; i++){
            int cnt = 0;
            while(k%prime[i] == 0){
                k /= prime[i];
                //b /= prime[i];
                cnt++;
            }
            ans *= (cnt+1);
        }
        ///cout<<a<<" "<<b<<endl;
        if(k>1 ) ans *= 2;
        cout<<ans<<endl;
    }
}