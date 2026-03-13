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
    vector<int>a(n),b(n),pre(n+1, 0);
    for(auto &a : a) cin>>a;
    for(auto &a : b) cin>>a;

    int sum = 0;

    for(int i=1; i<=n; i++){
        sum+= (a[i-1]*b[i-1]);
    }
    // cout<<sum<<nl;
    int ans = sum;
    for(int i=0; i<n; i++){
        int val = sum;
        int l=i-1, r=i+1;
        while(l>=0 and r<n){
            // cout<<"age -> "<<val<<" "<<ans<<nl;
            val += (a[r]*b[l]+a[l]*b[r])-(a[l]*b[l]+a[r]*b[r]);
            ans = max(ans,val);
            l--; r++;
            // cout<<"pore -> "<<val<<" "<<ans<<nl;
        }
    }
    // cout<<ans<<nl;
    for(int i=0; i<n-1; i++){
        int val = sum;
        int l=i,r=i+1;
        // cout<<"age -> "<<val<<" "<<ans<<nl;
        val += (a[r] * b[l] + a[l] * b[r]) - (a[l] * b[l] + a[r] * b[r]);
        ans = max(ans,val);

        l=i-1; r = i+2;
        while(l>=0 and r<n){
            val += (a[r] * b[l] + a[l] * b[r]) - (a[l] * b[l] + a[r] * b[r]);
            ans = max(ans,val);
            l--; r++;
        }
        // cout<<"pore -> "<<val<<" "<<ans<<nl;
    }
    cout<<ans<<nl;


}

int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}