// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;
const int N = 3000005;
bitset<N>isprime;
vector<int>prime;

void sieve(){
    isprime[1]=1;
    for (int i = 2; i * i < N; i++){
        if (isprime[i] == 1) continue;
        for (int j = i * i; j < N; j += i) isprime[j] = 1;
    }
    for(int i=1; i<N; i++){
        if(!isprime[i]) prime.push_back(i);
    }
    // for(int i=0; i<10; i++) cout<<prime[i]<<" ";
}


void solve(){
    int n; cin>>n;
    int ans = 1;
    for(int i=0; prime[i]*prime[i]<=n; i++){
        if(n%prime[i]==0){
            int cnt = 0;
            while(n%prime[i]==0){
                n /= prime[i];
                cnt++;
            }
            ans *= (cnt+1);
        }
    }
    if(n>1) ans *=2;
    cout<<ans<<nl;
}

int32_t main(){
    fast
    sieve();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}