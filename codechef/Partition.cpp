#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    map<int,int>mp;
    for(auto a : v) mp[a]++;
    int mx=0;
    for(auto [a,b] : mp) mx = max(mx,b);

    cout<<(n-mx+1)<<endl;
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