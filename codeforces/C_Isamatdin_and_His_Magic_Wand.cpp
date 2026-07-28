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
    for(auto &u : v) cin>>u;
    int a=0,b=0;
    for(auto u : v){
        if(u&1) a++;
        else b++;
    }
    if(a>=1 and b>=1){
        sort(all(v));
        for(auto a : v) cout<<a<<" "; cout<<nl;
        return;
    }
    for(auto a : v) cout<<a<<" "; cout<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}