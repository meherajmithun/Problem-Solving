// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k,m; cin>>n>>k>>m;
    if(k>m){
        cout<<"NO\n"; return;
    }
    cout<<"YES\n";
    vector<int>pre(n+1, 0);
    for(int i=0; i<=n; i++){
        pre[i] = i%k;
    }
    // for(auto a : pre) cout<<a<<" "; cout<<nl;
    for(int i=1; i<=n; i++){
        int val = pre[i]-pre[i-1]+m;
        if(val==0) cout<<m<<" ";
        else cout<<val<<" ";
    }
    cout<<nl;
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