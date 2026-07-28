#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int x; cin>>x;
    // y = x+1;
    if(x%5==0){
        cout<<"No\n";
    }
    else cout<<"Yes\n";
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