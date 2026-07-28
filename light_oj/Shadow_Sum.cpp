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
    map<int,int>mp;
    for(auto a : v){
        mp[abs(a)] = a;
    }
    int sum = 0;
    for(auto [a,b] : mp) sum += b;
    cout<<sum<<nl;
}

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    int C = 1;
    while (tc--) {
        cout<<"Case "<<C++<<": ";
        solve();
    }
    return 0;
}