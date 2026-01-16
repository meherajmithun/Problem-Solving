//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};
const int N = 1e6+123;
bitset<N+121>isprime;
vector<int>prime;

void primes(int n){
    for(int i = 3; i<=n; i+=2){
        isprime[i] = 1;
    }
    isprime[2] = 1;
    for(int i=3; (i*i) <= n; i+=2){
        for(int j=(i*i); j<=n; j+=(2*i)){
            isprime[j] = 0;
        }
    }
    prime.push_back(2);
    for(int i=3; i<=n; i+=2){
        if(isprime[i]){
            prime.push_back(i);
        }
    }
}

void solve() {
    int n,k; cin>>n>>k;
    primes(n);
    int cnt = 0;
    for(int i=0; i<prime.size(); i++){
        for(int j=0; j<prime.size(); j++){
            if(prime[j]+prime[j+1]+1 == prime[i]){
                cnt++;
            }
        }
    }
    if(cnt >= k) cout<<"YES\n";
    else cout<<"NO";
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}