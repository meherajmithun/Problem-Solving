// IN THE NAME OF ALLAH
#pragma GCC optimize("Ofast")
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
    vector<tuple<int,int,int>>mp;
    
    for(int i=0; i<n; i++){
        int a,b; cin>>a>>b;
        if(a>b){
            mp.push_back({b, a, 0});
        }
        else mp.push_back({a, b, 1});
    }

    sort(all(mp));
    
    for(auto [a,b, state] : mp){
        if(state) cout<<a<<" "<<b<<" ";
        else cout<<b<<" "<<a<<" ";
    }
    cout<<nl;
}
int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    int w = 1;
    while (tc--) {
        //cout << "Case " << w++ << ": ";
        solve();
    }
    return 0;
}