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
    string s; cin>>s;
    if(k*2 > n){
        cout<<"-1\n"; return;
    }
    int cost = 0;
    for(int i=0; i<k; i++){
        if(s[i]=='L') cost++;
    }
    // cout<<cost<<nl; return ;
    for(int i=n-k; i<n; i++){
        if(s[i]=='R') cost++;
    }
    cout<<cost<<nl;
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