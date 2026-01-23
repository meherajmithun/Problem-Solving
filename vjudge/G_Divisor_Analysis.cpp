#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
vector<pair<int,int>>vp;

int NOD(){
    int ans = 1;
    for(auto [a,b] : vp) {
        ans =(1LL*ans*(b+1))%mod;
    }
    return ans;
}

int power(int a, int b){
    int ans = 1;
    while(b>0){
        if(b&1){
            ans = (1LL*ans*a)%mod;
        }
        a = (1LL*a*a)%mod;
        b >>= 1;
    }
    return ans%mod;
}

int SOD(){
    int ans = 1;
    for(auto [a,b] : vp){
        int upore = (power(a, b+1)-1+mod)%mod;
        int niche = power(a-1, mod-2);
        ans = (1LL*ans*upore)%mod;
        ans = (1LL*ans*niche)%mod;
    }
    return ans;
}
int POD(){
    int cnt = 1;
    for(auto [a,b] : vp){
        cnt = (cnt * (b + 1)) % (mod - 1);
    }

    int ans = 1;

    for(auto [a,b] : vp){
        int exp;
        if(cnt % 2 == 0){
            exp = (b % (mod-1)) * ((cnt / 2) % (mod-1)) % (mod-1);
        } else {
            exp = ((b / 2) % (mod-1)) * (cnt % (mod-1)) % (mod-1);
        }
        ans = (ans * power(a, exp)) % mod;
    }
    return ans%mod;
}

void solve(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int a,b; cin>>a>>b;
        vp.push_back({a,b});
    }
    // for(auto [a,b] : vp) cout<<a<<" "<<b<<'\n';

    cout<<NOD()<<" "<<SOD()<<" "<<POD();
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    while(tc--){
        solve();
    }
}