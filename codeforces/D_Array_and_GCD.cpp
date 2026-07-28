// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int N = 10000005;
bitset<N>isprime;
vector<int>prime;

void sieve(){
    isprime[1]=1;
    for (int i = 2; i * i <= N; i++){
        if (isprime[i] == 1) continue;
        for (int j = i * i; j < N; j += i) isprime[j] = 1;
    }
    for(int i=2; i<N; i++){
        if(!isprime[i]) prime.push_back(i);
    }

}
void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    sort(rall(v));
    int ans = 0;
    int cnt=0,res=0;
    for(int i=0; i<n; i++){
        cnt += v[i];
        res += prime[i];
        if(cnt>=res) ans++;
    }
    // cout<<cnt<<" "<<res<<nl;
    cout<<n-ans<<nl;
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