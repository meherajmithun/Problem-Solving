// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k; cin>>k>>n;
    vector<pair<int,int>>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    vector<int>b(n);
    sort(all(a));
    // for(auto [x,y] : a) cout<<x<<" "<<y<<nl;
    for(int i=0; i<n; i++){
        int need = k/(n-i);
        need = min(need, a[i].first);
        b[a[i].second] = need;
        k -= need;
    }
    for(auto x : b) cout<<x<<" "; cout<<nl;
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