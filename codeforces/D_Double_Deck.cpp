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
    vector<int>a(n*k), b(n*k), cs[n+1];
    for(auto &a : a) cin>>a;
    for(int i=0; i<n*k; i++){
        cin>>b[i];
        cs[b[i]].push_back(i);
    }

    // for(int i=1; i<=n; i++){
    //     for(auto a : cs[i]) cout<<a<<" "; cout<<nl;
    // }
    
    for(int i=1; i<=n; i++) reverse(cs[i].begin() , cs[i].end());
    
    // for(int i=1; i<=n; i++){
    //     for(auto a : cs[i]) cout<<a<<" "; cout<<nl;
    // }

    vector<int> ans;

    for (auto x : a) {
        for (auto p : cs[x]) {
            auto it = lower_bound(ans.begin(), ans.end(), p);
            if (it == ans.end())
                ans.push_back(p);
            else
                *it = p;
        }
    }
    cout<<sz(ans)<<nl;
}

int32_t main() {
    fast
    int tc = 1;
    // cin >> tc
    while (tc--) {
        solve();
    }
    return 0;
}