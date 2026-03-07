#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    vector<int>v2 = v;
    sort(v2.begin() , v2.end());
    for(int i=0; i<n; i++){
        if(v[i]!=v2[i]){
            cout<<1<<'\n';
            return;
        }
    }
    cout<<n<<'\n';
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