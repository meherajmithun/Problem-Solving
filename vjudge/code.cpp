#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,s; cin>>n>>s;
    vector<int>v(n),pre(n+1),suf(n+1);
    for(int i=0; i<n; i++){
        cin>>v[i];
        pre[i+1] = pre[i]+v[i];
    }
    for(auto a : pre) cout<<a<<" "; cout<<endl;
    for(int i=n-1; i>=0; i--){
        suf[i] = suf[i+1]+v[i];
    }
    for(auto a : suf) cout<<a<<" "; cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}