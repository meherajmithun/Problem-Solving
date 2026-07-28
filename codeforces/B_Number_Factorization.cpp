#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
const int N = (1e6+123);

bitset<N+121>isprime;
vector<int>prime;

void sieve(){
    for(int i=3; i<=N; i+=2) isprime[i]=1;
    isprime[2]=1;
    for(int i=3; i<=sqrt(N); i+=2){
        if(isprime[i]){
            for(int j=i*i; j<=N; j+=(i+i)){
                isprime[j]=0;
            }
        }
    }
    prime.push_back(2);
    for(int i=3; i<N; i+=2){
        if(isprime[i]) prime.push_back(i);
    }
    // for(int i=0; i<100; i++) cout<<prime[i]<<" "; cout<<endl;
}
vector<pair<int,int>>vp;

void pf(int n){
    vp.push_back({0, 0});
    for(int i=0; prime[i]*prime[i] <= n; i++){
        if(n%prime[i]==0){
            int a=0;
            while(n%prime[i]==0){
                n /= prime[i]; a++;
            }
            vp.push_back({a, prime[i]});
        }
    }
    if(n>1) vp.push_back({1,n});
}

void solve(){
    int n; cin>>n;
    pf(n);
    sort(vp.begin() , vp.end());
    int m = vp.size();
    vector<int>v(m+12);
    v[m] = 1;
    for(int i=m-1; i>=1; i--) v[i]=vp[i].second*v[i+1];
    int ans = 0;
    for(int i=1; i<m; i++){
        if(vp[i].first != vp[i-1].first) ans += v[i]*(vp[i].first-vp[i-1].first);
    }
    cout<<ans<<'\n';
    vp.clear();
}



int32_t main(){
    sieve();
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}