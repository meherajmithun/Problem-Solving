#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    sort(v.begin() , v.end());
    for(int i=1; i<n; i++){
        if(v[0]==v[i]){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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