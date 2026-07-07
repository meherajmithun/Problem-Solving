// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n; cin>>n;
    vector<int>v(n),pre(n+1), pre2(n+1);
    for(auto &a : v) cin>>a;
    for(int i=1; i<=n; i++){
        int a = v[i-1];
        pre[i] = pre[i-1]; pre2[i] = pre2[i-1];
        if(a==1){
            pre[i]++;
            pre2[i]++;
        }
        else if(a==2){
            pre[i]--;
            pre2[i]++;
        }
        else{
            pre[i]--;
            pre2[i]--;
        }
    }
    // for(auto a : pre) cout<<a<<" "; cout<<nl;
    // for(auto a : pre2) cout<<a<<" "; cout<<nl;
    int mn = INT_MAX;
    for(int i=1; i<n; i++){
        if(pre[i]>=0) mn = min(mn, pre2[i]);
        if(mn<=pre2[i+1]){
            cout<<"YES\n"; return;
        }
    }
    cout<<"NO\n";
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