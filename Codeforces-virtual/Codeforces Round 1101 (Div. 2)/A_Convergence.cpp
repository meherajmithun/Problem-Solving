#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    sort(v.begin() , v.end());
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            if(v[j] != -1 and v[i]!=v[j]){
                v[j] = -1; cnt++; break;
            }
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