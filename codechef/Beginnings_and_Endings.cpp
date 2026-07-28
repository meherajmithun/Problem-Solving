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
    map<int,int>mp;
    int f = 0;
    for(auto &a : v) {
        cin>>a; mp[a]++;
        if(mp[a]==2) f = 1;
    }
    if(!f){
        cout<<"-1\n"; return;
    }
    int ans = INT_MAX;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            if(v[i]==v[j]){
                int cost = i+(n-j-1);
                ans = min(ans,cost);
            }
        }
    }
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