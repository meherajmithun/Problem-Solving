#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+123;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    map<int,int>mp;
    for(int i=0; i<n; i++){
        mp[v[i]] += (i+1);
    }
    for(auto [a,b] : mp) cout<<a<<" "<<b<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}