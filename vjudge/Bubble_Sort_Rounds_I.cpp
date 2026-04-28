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
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    vector<int>v2 = v;
    sort(all(v2));
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(v[i]!=v2[i]) cnt++;
    }
    cout<<cnt<<nl; return;

}

int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}