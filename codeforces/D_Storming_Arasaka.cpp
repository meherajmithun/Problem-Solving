// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
const int N = 1000005;
vector<int>prime(N, 0), primeCnt(N, 0);
// bitset<N>isprime; vector<int>prime;
// void sieve(){
//    isprime[1]=1;
//    for (int i = 2; i < N; i++){
//        if (isprime[i] == 1) continue;
//        for (int j =i+i;j < N; j+=i) isprime[j] = 1;
//    }
//    for(int i = 2; i < N; i++){
//       if(!isprime[i]) prime.push_back(i);
//    }
// }

void sieve(){
    for(int i=2; i<N; i++){
        if(prime[i]==0){
            for(int j=i; j<N; j+=i){
                prime[j]++;
                int n = j;
                while(n%i==0){
                    primeCnt[j]++;
                    n /= i;
                }
            }
        }
    }
}

void solve() {
    int n; cin>>n;
    cout<<prime[n]+primeCnt[n]-1<<nl;
}

int32_t main() {
    fast
    sieve();
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}