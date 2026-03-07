#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    sort(v.begin() , v.end());
    int ans = 1;
    for(int i=n-2; i>=0; i--){
        if(v[i]==v[n-1]) ans++;
    }
    cout<<ans<<'\n';
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