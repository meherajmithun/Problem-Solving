// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n,k; cin>>n>>k;
    if(k*k<n){
        cout<<"IMPOSSIBLE\n"; return;
    }
    vector<int>ans;
    for (int i = 1; i <= n; i += k) {
        int r = min(n, i + k - 1);
        // cout<<r<<" ";
        // for(auto a : ans) cout<<a<<" "; cout<<nl;
        for (int j = r; j >= i; j--) {
            ans.push_back(j);
        }
        // for(auto a : ans) cout<<a<<" "; cout<<nl;
    }
    for(auto a : ans) cout<<a<<" "; cout<<nl;
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