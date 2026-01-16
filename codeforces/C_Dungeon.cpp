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
        if (p1.second > 0 and p2.second == 0) return 1;
        if (p1.second == 0 and p2.second > 0) return 0;
        return p1.first < p2.first;
}

void solve(){
    int n,m; cin>>n>>m;

    multiset<int>ms;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        ms.insert(a);
    }

    // for(auto a : ms) cout<<a<<" "; cout<<nl;

    vector<int>v(m),v2(m);

    for(auto &a : v) cin>>a;
    for(auto &a : v2) cin>>a;

    vector<pair<int,int>>vp;
    for(int i=0; i<m; i++){
        vp.push_back({v[i], v2[i]});
    }

        // for(auto [a,b] : vp) cout<<a<<" "<<b<<nl;
    sort(all(vp), cmp);

    // for(auto [a,b] : vp) cout<<a<<" "<<b<<nl;

    int ans = 0;

    for(auto [a,b] : vp){
        auto it = ms.lower_bound(a);
        // cout<<*it<<nl;
        if(it != ms.end()){
            ms.erase(it);
            ans++;
            // cout<<ans<<nl;
            if(b>0){
                int x = max(*it, b); //cout<<x<<nl;
                ms.insert(x);
            }
        }
        // cout<<*ms.begin()<<nl;
    }
    // ans++;
    cout<<ans<<nl;


}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}