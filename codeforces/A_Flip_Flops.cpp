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
    int n,c,k; cin>>n>>c>>k;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    sort(all(v));
    // if(n==1){
    //     int t = c-k
    // }
    // for(auto a : v) cout<<a<<" "; cout<<nl;
    int ans = 0;
    for(int i=0; i<n; i++){
        if(c<v[i]) break;
        
            int dibo = min(k,c-v[i]); //cout<<dibo<<" ";
            if(dibo<0) dibo = 0;
            k -= dibo;
            if(c>=v[i]+dibo) {c += v[i]+dibo; }
            //  cout<<c<<nl;
    }
    cout<<c<<nl;
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