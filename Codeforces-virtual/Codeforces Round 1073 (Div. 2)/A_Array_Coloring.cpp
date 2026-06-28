#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<pair<int,int>>vp;
    int j = 1;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        vp.push_back({a,j});
        j *= -1; 
    }
    sort(vp.begin() , vp.end());
    for(int i=0; i<n-1; i++){
        if(vp[i].second==vp[i+1].second) {
            cout<<"NO\n"; return;
        }
    }
    cout<<"YES\n";
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