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
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    // if(n==2){
    //     if(v[0]==v[1]){
    //         cout<<"1\n";
    //     }
    //     else{
    //         cout<<"2\n";
    //     }
    //     return;
    // }
    n = unique(all(v))-v.begin();
    vector<int>b(n);
    // cout<<n<<nl;
    for(int i=0; i<n; i++) b[i] = v[i]<v[i+1];
    for(auto a : b) cout<<a<<" "; cout<<nl;
    int ans = unique(all(b))-b.begin();
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