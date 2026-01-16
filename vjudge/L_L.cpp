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
#define ll long long
const ll N = (ll) 5e5 + 125;
bitset<N> isPrime;
vector<ll> primes;
vector<int>nod(N+1, 0);
void sieve(){
    for(int i=3;i<=N;i+=2) {
        isPrime[i]=1;
    }
    for(ll i=3;i*i<=N;i+=2) {
        if(isPrime[i])
            for(int j=i*i;j<=N;j+=i+i) {
            isPrime[j]=0;
        }
    }
    primes.push_back(2);
    for(int i=3;i<N;i+=2) {
        if(isPrime[i])
            primes.push_back(i);
    }
}

void precal(){
    int k = 1;
    for(int i=1; i<=N; i++){
        int s=i,a=1;
        for(int j=0; primes[j]*primes[j]<=s; j++){
            int cnt = 0;
            if(s%primes[j]==0){
                while(s%primes[j]==0){
                    s/=primes[j];
                    cnt++;
                }
            }
            a *= (cnt+1);
        }
        if(s>1) a *= 2;
        nod[k]=a;
        k++;
    }
    // for(int i=1; i<=10; i++) cout<<nod[i]<<" "; cout<<nl;
}


void solve(){
    precal();
    int n; cin>>n;
    if(n==1){
        print(1); return;
    }
    for(int i=2; i<=N; i++){
        int x = sqrt(i);
        int cnt = nod[i];
        if(x*x == i){
            cnt += 1;
        }
        if(cnt ==n*2){
            cout<<i<<nl;
            return;
        }
    }
}

int32_t main(){
    fast
    sieve();
    int tc=1; //cin >> tc;
    while(tc--){
        solve();
    }
}