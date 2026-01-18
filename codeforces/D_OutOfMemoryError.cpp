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
    int n,m,h; cin>>n>>m>>h;
    vector<int>v(n);
    for(auto &a : v) cin>>a;

    vector<pair<int,int>>vp(n);

    for(int i=0; i<n; i++){
        vp[i] = {v[i], 0};
    }

    // for(auto [a,b] : vp) cout<<a<<" "<<b<<nl;

    int idx = 0;
    while(m--){
        int b,c; cin>>b>>c;
        b--;
        if(vp[b].second != idx){
            vp[b].first = v[b];
            vp[b].second = idx;
        }
        vp[b].first += c;
        if(vp[b].first>h){
            idx++;
        }
    }   

    vector<int>ans(n);
    for(int i=0; i<n; i++){
        if(vp[i].second != idx) ans[i] = v[i];
        else ans[i] = vp[i].first;
    }

    for(auto a : ans) cout<<a<<" "; cout<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}