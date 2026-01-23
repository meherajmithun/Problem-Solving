#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>v(n),hash(n+1, 0),ans(n+1, 0);

    for(auto &a : v) cin>>a;

    for(auto a : v){
        hash[a]++;
    }

    // for(auto a : hash) cout<<a<<" "; cout<<'\n';

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j+=i){
            ans[i] += hash[j];
        }
    }

    // for(auto a : ans) cout<<a<<" "; cout<<'\n';

    for(int i=1; i<=n; i++){
        ans[i] = (ans[i]*(ans[i]-1))/2;
    }
    for(int i=n; i>0; i--){
        for(int j=i+i; j<=n; j+=i){
            ans[i] -= ans[j];
        }
    }
    for(auto &a : hash) a=0;

    for(auto a : v){
        if(hash[a]) continue;
        for(int i = a; i<=n; i+=a){
            hash[i] = 1;
        }
    }
    int res = 0;
    for(int i=1; i<=n; i++){
        if(hash[i]==0){
            res += ans[i];
        }
    }
    cout<<res<<'\n';

}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}