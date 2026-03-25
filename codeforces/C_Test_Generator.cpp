// IN THE NAME OF ALLAH
#pragma GCC optimize("Ofast")
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
    int s,m; cin>>s>>m;
    int lo=0,hi=1e18;
    int ans = -1;
    while(hi>=lo){
        int mid = (hi+lo)/2;
        int sum = s;
        for(int i=m; i>0;){
            int p=1;
            while(p*2 <= i) p*=2;
            // cout<<p<<nl;
            int nibo = min(mid,sum/p);
            // cout<<nibo<<nl;
            sum -= (nibo*p);
            i -= p;
        }
        // cout<<sum<<nl;
        if(sum==0){
            ans = mid; hi = mid-1;
        }
        else lo = mid+1;
        // cout<<ans<<nl;
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