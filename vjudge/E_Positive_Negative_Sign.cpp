// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    int t = n/2;
    int k = n*n;
    // cout<<t<<" "<<k<<nl;
    int ans = k;
    t = 4*(t/m);
    ans /= t;
    cout<<ans<<nl;   
}

int32_t main(){
    fast
    int tc=1;
    cin >> tc;
    int C = 1;
    while(tc--){
        cout << "Case " << C++ << ": ";
        solve();
    }
}