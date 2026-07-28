#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = (ll)3e8+123;
bitset<N>isprime;
vector<int>prime;

void sieve(){
    for(int i=3; i<=N; i+=2) isprime[i]=1;
    for(int i=3; i<=sqrt(N); i+=2){
        if(isprime[i]){
            for(int j=i*i; j<=N; j+=(2*i)){
                isprime[j]=0;
            }
        }
    }
    isprime[2]=1;
    prime.push_back(2);
    for(int i=3;i<=N; i+=2){
        if(isprime[i]) prime.push_back(i);
    }
}

int main(){
    sieve();
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        int ans = 0;
        for(auto u : prime){
            if(u>n){
                break;
            }
            ans += n/u;
        }
        cout<<ans<<'\n';
    }
}