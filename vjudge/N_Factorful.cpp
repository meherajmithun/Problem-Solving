//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define ll long long
const ll N = (ll) 3e3+5;
const ll mod = (ll) 1e9+7;
const ll inf = (ll) 1e18;
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};
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
            for(int j = (i * i); j <= sqrt(N); j += (2 * i)){
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
    int a,b,n; cin>>a>>b>>n;
    if(n == 0){
        cout<<"1\n";
        return;
    }
    int ans = 0;
    for(int i=a; i<=b; i++){
        int k = i;
        int cnt = 0;
        for(int j=0; prime[j]*prime[j]<=k; j++){
            if(k%prime[j] == 0){
                while(k%prime[j] == 0){
                    k /= prime[j];
                }
                cnt++;
            }
        }
        if(k>1) cnt++;
        //cout<<cnt<<" ";
        if(cnt == n) ans++;
    }
    print(ans);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    sieve();
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}