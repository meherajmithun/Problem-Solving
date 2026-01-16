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
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int ans = INT_MAX;
    if(k == 4){
        int even=0;
        for(auto u : v){
            if(!(u&1)) even++;
        }
        if(even>=2) ans = 0;
        if(even==1) ans = 1;
        if(even==0) ans = 2;
    }
    //cout<<ans<<" ";
    for(auto u : v){
        ans = min(ans,k-(u%k));
        if(u%k == 0){
            cout<<"0\n";
            return;
        }
    }
    print(ans);
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}