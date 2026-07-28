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

bool cmp(pair<int,int>&p1, pair<int,int>&p2){
    if(p1.first!=p2.first) return p1.first<p2.first;

    return p1.second>p2.second;
}


void solve(){
    int n; cin>>n;
    vector<int>v(n),v2(n);
    for(auto &a : v) cin>>a;
    for(auto &a : v2) cin>>a;
    vector<pair<int,int>>vp;
    map<int,vector<int>>mp;

    for(int i=0; i<n; i++){
        int a = v[i], b=v2[i];
        vp.push_back({a,b});
    }   

    sort(all(vp),cmp);

    for(auto [a,b] : vp) mp[a].push_back(b);

    for (auto &[a,b] : mp) {
        sort(rall(b));
        for (int i = 1; i < sz(b); i++) {
            b[i] += b[i - 1];
        }
    }
    vector<int> ans(n+1, 0);

    for(auto &[a,b] : mp){
        int t = sz(b);
        for(int i=1; i<=t; i++){
            int nibo = (t/i)*i;
            if(nibo > 0) ans[i] += b[nibo-1];
        }
    }

    for(int i=1; i<=n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
        // cout<<nl<<nl;
    }
}