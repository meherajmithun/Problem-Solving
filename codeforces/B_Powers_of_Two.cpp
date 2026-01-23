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
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    int ans = 0;
    map<int,int>mp;
    for(auto a : v){
        int p = 2;
        for(int i=1; i<31; i++){
            int x = (p-a);
            ans += mp[x];
            p *= 2;
        }
        mp[a]++;
        // cout<<ans<<" ";
    }
    cout<<ans<<nl;
}

int32_t main(){
    fast
    int tc=1; //cin >> tc;
    while(tc--){
        solve();
    }
}