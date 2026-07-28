//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n,k; cin>>n>>k;
    int ans = 1;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        ans *= a;
        int tmp = ans;
        string s = to_string(tmp);
        int sz = (int)s.size();
        if(sz>k) ans = 1;
    }
    print(ans);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}