#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int mn = INT_MAX;

    vector<int>pre(n+1, 0);

    for(int i=1; i<=n; i++){
        char c = s[i-1];
        if(c=='W'){
            pre[i] = (pre[i-1]+1);
        }
        else pre[i] = (pre[i-1]);
    }
    // for(auto a : pre) cout<<a<<" "; cout<<endl;
    for(int i=1; i<=(n-k+1); i++){
        mn = min(mn, (pre[i+k-1]-pre[i-1]));
    }
    cout<<mn<<endl;
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