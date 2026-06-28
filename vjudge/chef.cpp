#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    int cnt = count(v.begin() , v.end(), 1);
    if(cnt==n){
        cout<<"0\n"; return;
    }
    if(cnt>0){
        int ans = 0;
        for(int i=0; i<n; i++){
            if(v[i]!=1){
                if(i==0 or v[i-1]==1) ans++;
            }
        }
        cout<<ans<<endl;
        return;
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        if(i==0 or v[i]!=v[i-1]) ans++;    }
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