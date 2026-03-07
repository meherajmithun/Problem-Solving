#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    sort(v.begin() , v.end());

    for(auto a : v){
        if(a==67){
            cout<<"YES\n"; return;
        }
    }
    cout<<"NO\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
}