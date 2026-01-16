// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve(){
    int n; cin>>n;
    vector<pair<int,int>>vp;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        vp.push_back({a,i});
    }
    sort(all(vp));
    vector<int>ans(n);
    ans[vp[0].second]=-1;
    ans[vp[n-1].second]=-1;
    for(int i=1; i<n-1; i++){
        int a = (vp[i-1].first+vp[i].first)/2 + 1;
        int b = (vp[i].first+vp[i+1].first)/2;
        int k = max(0,b-a+1);
        ans[vp[i].second]=k;
    }   
    for(auto u : ans) cout<<u<<" "; cout<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}