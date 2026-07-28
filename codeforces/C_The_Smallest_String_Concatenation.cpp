//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).end(), (x).begin()
#define print(x) cout<<x<<'\n'
using namespace std;

bool cmp(string x,string y){
    return (x+y) < (y+x);
}
void solve() {
    int n; cin>>n;
    vector<string>v(n);
    for(auto &u : v) cin>>u;
    sort(v.begin() , v.end(), cmp);
    //for(auto u : v) cout<<u<<" "; cout<<endl;
    string ans = "";
    for(auto u : v) ans += u;
    print(ans);
}

int32_t main() {
    fast
    int tc = 1; ///cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}