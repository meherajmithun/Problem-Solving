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
    vector<int>v(n),cs;
    for(auto &a : v) cin>>a;

    int cnt = 0,i=1;

    for(int i=n-1; i>=0; i--){
        int tmp=v[i];
        if(cnt&1){
            tmp *= -1;
        }
        // cout<<tmp<<nl;
        if(tmp>0){
            cs.push_back(i+1);
            cnt++;
        }
    }
    cout<<cnt<<nl;
    for(auto a : cs) cout<<a<<" "; cout<<nl;

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