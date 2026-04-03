#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    int cnt = 0;
    for(int x=1; x<=sqrt(n); x++){
        for(int j=0; j<n; j++){
            int t = x*v[j];
            if(t>j) continue;
            int i = j-t;
            if(v[i]==x) cnt++;
        }
    }
    for(int i=0; i<n; i++){
        if(v[i]>sqrt(n)){
        for(int i=0; i<n; i++){
            int j = i+x*v[i];
            if(j<0 or j>=n) continue;
            if(v[j]==x) cnt++;
        }
    }
    cout<<cnt<<endl;
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