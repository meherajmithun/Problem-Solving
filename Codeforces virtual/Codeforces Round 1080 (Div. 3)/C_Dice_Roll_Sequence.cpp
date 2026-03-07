#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    int cnt = 0;
    for(int i=0; i<n-1; i++){
        if(v[i] == v[i+1] or v[i] == 7-v[i+1]){
            cnt++;
            i++;
        }
    }
    cout<<cnt<<nl;
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