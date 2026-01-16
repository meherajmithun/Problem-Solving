#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e7+123;
bitset<N>isprime;
// isprime[i] = 1 --> prime
// isprime[i] = 0 --> Not prime
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
    //for(auto u : prime) cout << u << " ";
}

void solve(){
    int d; cin>>d;
    int it = *upper_bound(prime.begin() , prime.end(),d);
    int it2 = *upper_bound(prime.begin() , prime.end(),it+d-1);
    cout<<it*it2<<endl;
}

int32_t main(){
    int tc; cin>>tc;
    sieve();
    while(tc--){
        solve();
    }
}