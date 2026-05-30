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
#define print(x) cout<<x<<'\n'

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    int k = 0;
    for(int i=0; i<n-1; i++){
        k = max(k, v[i]-v[i+1]);
    }
    // cout<<k<<nl;
    int first = v[0];
    for(int i=1; i<n; i++){
        if(v[i]<first){
            v[i] += k;
            
            // cout<<v[i]<<nl;
            if(v[i]<first){
                cout<<"NO\n"; return;
            }
        }
        first = v[i];
        // cout<<first<<" ";
    }
    // for(auto a : v) cout<<a<<" "; cout<<nl;
    cout<<"YES\n";
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