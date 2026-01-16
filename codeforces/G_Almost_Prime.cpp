#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,k; 
const int mx = 1e7 + 123;
bool isprime[mx];
vector<int> prime;

void sieve(int n) {
    for (int i = 3; i <= n; i += 2) {
        isprime[i] = true;
    }
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
}
int prime_gen(int n){
    int cnt = 0,ans= 0;
    for(int i=2; i<=n; i++){
        int tmp = i;
        cnt = 0;
        map<int,int>mp;
        for(auto u : prime){
            if(tmp%u == 0){
                while(tmp%u == 0){
                    mp[u]++;
                    
                    tmp /= u;
                    if(mp[u] == 1) cnt++;
                }
            }
        }
        mp.clear();
        if(tmp>1){
            cnt++;
        }
        if(cnt == 2) ans++;
    }
    return ans;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>n>>k;
    sieve(n);
    cout<<prime_gen(n);

}