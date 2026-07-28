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
    vector<int>a(n),b(n),c(n);
    for(auto &a : a) cin>>a;
    for(auto &a : b) cin>>a;
    for(int i=0; i<n; i++){
        c[i] = b[i]-a[i];
    }
    // for(auto a : c) cout<<a<<" "; cout<<nl;
    multiset<int>ms;
    vector<int>extra;
    for(auto a : c){
        if(a<0){
            extra.push_back(abs(a));
        }
        else ms.insert(a);
    }
    // for(auto a : ms) cout<<a<<" "; cout<<nl;
    // for(auto a : extra) cout<<a<<" "; cout<<nl;
    int ans = 0;
    for(auto a : extra){
        auto it = ms.lower_bound(a);
        if(it!=ms.end()){
            ans++;
            ms.erase(it);
        }
    }
    ans += (ms.size()/2);
    cout<<ans<<nl;
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