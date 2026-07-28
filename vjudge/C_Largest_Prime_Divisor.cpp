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
//    for(auto u : prime) cout << u << " ";
}
void solve() {
    while(1){
        int n; cin>>n;
        if(n == 0) return;
        if(n<0) n*= -1;
        int mx = -1,cnt = 0;
        for(int i=0; prime[i] <= sqrt(n); i++){
            while(n%prime[i] == 0){
                mx = max(mx,prime[i]);
                n /= prime[i];
            }
            if(mx == prime[i]){
                cnt++;
            }
        }
        if(n>1){
            cnt++;
            mx = max(mx,n);
        }
        if(cnt<2){
            print(-1);
            continue;
        }
        print(mx);
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    sieve();
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}