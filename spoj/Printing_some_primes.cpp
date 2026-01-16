#include<bits/stdc++.h>
using namespace std;
const long long mx = 1e8+123;
bitset<mx>isprime;
vector<int>prime;
#define int long long

void sieve(int n){
    for(int i = 2; i <= n; i++) isprime[i] = 1;
    
    for(int i = 3; i*i <= n; i += 2){
        if(isprime[i] == 1){
            for(int j = i+i; j <= n; j += i){
                isprime[i] = 0;
            }
        }
    }
    prime.push_back(2);
    for(int i = 3; i <= n; i += 2){
        if(isprime[i] == 1) prime.push_back(i);
    }
}
int32_t main(){
    int limit = 1e7;
    sieve(limit);
    for(int i = 1; i <= limit; i += 100) cout<<prime[i]<<" ";
}