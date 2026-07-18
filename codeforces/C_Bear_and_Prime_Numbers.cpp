// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
const int N = 10000000+123;
bitset<N>isprime;
vector<int>prime;
void sieve(){
    // isprime[2]=1;
    for(int i=2; i<N; i++){
        if(isprime[i]) continue;
        for(int j=i+i; j<N; j+=i) isprime[j]=1;        
    }
    for(int i=2; i<N; i++){
        if(!isprime[i]) prime.push_back(i);
    }
    // for(int i=0; i<100; i++) cout<<prime[i]<<" "; cout<<endl;
}
void solve() {
    int n; cin>>n;
    vector<int>v(n),Hash(N, 0),cnt(N, 0);
    
    for(auto &a : v){
        cin>>a; Hash[a]++;
    }

    for(int i=2; i<N; i++){
        for(int j=i; j<N; j+=i){
            cnt[i] += Hash[j];
        }
    }
    // for(int i=2; i<N; i++){
    //     if(cnt[i]>0) cout<<i<<" -> "<<cnt[i]<<nl;
    // }

    vector<int>pre(N, 0),psum(N, 0);
    for(auto a : prime) pre[a] += cnt[a];
    // for(int i=2; i<N; i++){
    //     if(pre[i]>0) cout<<i<<" "<<pre[i]<<nl;
    // }
    for(int i=1; i<N; i++) psum[i] = psum[i-1] + pre[i];
    int query; cin>>query;
    while(query--){
        int l,r; cin>>l>>r;
        l = min(l, N - 1);
        r = min(r, N - 1);
        cout<<psum[r]-psum[l-1]<<nl;
        // vector<int>cs = segmented_sieve(l,r);
        // // for(auto a : cs) cout<<a<<" "; cout<<nl;
        // int ans = 0;
        // for(auto a : cs) ans += cnt[a];
        // cout<<ans<<nl;
    }


}

int32_t main() {
    fast
    sieve();
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}