//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).end(), (x).begin()
#define print(x) cout<<x<<'\n'
using namespace std;
const ll N = (ll) 1e5+5;
bitset<N> isprime;
// isprime[i] = 1 --> prime
// isprime[i] = 0 --> Not prime

void sieve() {
    for (int i = 3; i <= N; i += 2) {
        isprime[i] = 1;
    }
    isprime[2] = 1;

    for (int i = 3; i <= sqrt(N); i += 2) {
        if (isprime[i]) {
            for (int j = (i * i); j <= sqrt(N); j += (2 * i)) {
                isprime[j] = 0;
            }
        }
    }
    vector<int> prime;
    prime.push_back(2);
    for (int i = 3; i <= N; i += 2) {
        if (isprime[i]) {
            prime.push_back(i);
        }
    }
    // for (auto u : prime) cout << u << " ";
}
void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int cnt = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int sum = v[i]+v[j];
            if(isprime[sum]) cnt++;
        }
    }
    print(cnt);
}

int32_t main() {
    fast
    sieve();
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}