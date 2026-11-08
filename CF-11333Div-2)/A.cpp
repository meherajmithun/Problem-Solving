// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k; cin>>n>>k;
    int c=0,c1=0;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if((a&1) == (k&1)) c++;
    }
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if((a&1) == (k&1)) c1++;
    }
    // cout<<c<<" "<<c1<<nl;
    if(c<=c1) cout<<"YES\n";
    else cout<<"NO\n";
}

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}