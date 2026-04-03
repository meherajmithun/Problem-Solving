// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
// #define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int l=0,r=1e9+123;
    int ans = 0;
    while(l<r){
        int mid = (l+r)/2;
        cout<<"? "<<mid<<nl;
        string s; cin>>s;
        if(s=="YES"){
            l = mid+1;
        }
        else{
            r = mid;
            ans = mid;
        }
    }
    cout<<"! "<<ans<<nl;
}

int32_t main() {
    // fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}