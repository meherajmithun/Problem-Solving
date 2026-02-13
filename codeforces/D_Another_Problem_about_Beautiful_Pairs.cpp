// IN THE NAME OF ALLAH
#pragma GCC optimize("Ofast")
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
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=1; i+(v[i]*j)<n; j++){

            // cout<<i+(v[i]*j)<<" ";

            int k = i+(v[i]*j);

            // cout<<k<<nl;

            if(v[k]==j) ans++;

            // cout<<ans<<nl;

        }
    }
    cout<<ans<<nl;
}

int32_t main(){
    fast
    int tc=1;
    cin >> tc;
    int C = 1;
    while(tc--){
        // cout << "Case " << C++ << ": ";
        solve();
    }
}