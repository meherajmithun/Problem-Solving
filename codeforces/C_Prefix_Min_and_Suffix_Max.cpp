#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    int mn = INT_MAX;
    string ans(n, '0');
    for(int i=0; i<n; i++){
        if(v[i]<mn){
            mn = v[i]; ans[i]='1';
        }
    }
    int mx = 0;
    for(int i=n-1; i>=0; i--){
        if(v[i]>mx){
            mx = v[i]; ans[i]='1';
        }
    }
    cout<<ans<<endl;
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