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
    for(auto &a : v) cin>>a;
    map<int,int>mp;
    for(auto a : v){
        mp[a]++;
    }   
    // for(auto [a,b] : mp) cout<<a<<" "<<b<<nl;
    vector<pair<int,int>>vp;
    for(auto [a,b] : mp) vp.push_back({b,a});
    sort(vp.rbegin() , vp.rend());
    int ans = 0;
    // for(auto [a,b] : vp) cout<<a<<" "<<b<<nl;
    

}

int32_t main(){
    fast
    int tc=1; //cin >> tc;
    while(tc--){
        solve();
    }
}