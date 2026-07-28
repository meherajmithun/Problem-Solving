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
    vector<int>a(n),b(n);
    for(auto &a : a) cin>>a;
    for(auto &a : b) cin>>a;
    vector<int>cs(n, -1);
    bool bl = 1;
    for(int i=0; i<n; i++){
        int idx = -1;
        for(int j=0; j<n; j++){
            if(cs[j]==-1 and a[i]<=b[j]){
                idx = j; break;
            }
                // cout<<idx<<" ,, ";
        }
        if(idx==-1){
            bl = 0; break;
        }
        cs[idx] = i;
        // cout<<cs[idx]<<" ";
        // for(auto a : cs) cout<<a<<" "; cout<<nl;
    }
    // for(auto a : cs) cout<<a<<" "; cout<<nl;
    // int sum = 0;
    // for(auto a : cs){
    //     sum +=a ;
    // }
    // cout<<sum<<nl;
    if(!bl){
        cout<<"-1\n"; return;
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(cs[i]>cs[j]) ans++;
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