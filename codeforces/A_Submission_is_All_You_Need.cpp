#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    int ans = 0;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(a == 0) ans++;
        else ans += a;
    }    
    cout<<ans<<endl;;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}