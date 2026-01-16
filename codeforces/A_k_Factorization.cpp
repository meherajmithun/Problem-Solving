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

vector<int>prime_gen(int n){
    vector<int>prime_factor;
    int tmp = n;
    int cnt = 0;
    int val = 1;
    bool f = 0;
    for(auto u : prime){
        if(n%u == 0){
            while(n%u == 0){
                val *= u;
                prime_factor.push_back(u);
                n /= u;
                cnt++;
                if(cnt == k-1){
                    f = 1;
                    break;
                }
            }
            if(f == 1) break;
        }
    }
    if(n>1) {
        prime_factor.push_back(n);
        val *= n;
        cnt++;
    }
    if(val != tmp or cnt != k){
        vector<int>v{-1};
        return v;
    }
    return prime_factor;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>n>>k;
    if( k == 1){
        cout<<n;
        return 0;
    }
    sieve(n);
    vector<int> prime2 = prime_gen(n);

    for(auto u : prime2) cout<<u<<" ";
}