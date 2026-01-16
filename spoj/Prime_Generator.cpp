#include<bits/stdc++.h>
using namespace std;
#define ll  long long
const int N = 1e6+123;
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

void solve(){
    int a,b; cin>>a>>b;
    //for(int i=a; i<b; i++) cout<<prime[i]<<" "; cout<<endl;
    for(int i=0; prime[i]<=b and prime.size()<b; i++){
        if(prime[i]>=a) cout<<prime[i]<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    sieve();
    int tc; cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}
