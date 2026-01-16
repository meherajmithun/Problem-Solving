//  IN THE NAME OF ALLAH

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

void solve() {
    int n,query; cin>>n>>query;
    vector<int>v(n),pre(n+1);
    for(auto &u : v) cin>>u;
    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1]+v[i-1];
    }
   // for(auto u : pre) cout<<u<<" "; cout<<endl;
    int idx = 0;
    while(query--){
        int type; cin>>type;
        if(type == 1){
            int c; cin>>c;
            idx = (idx+c)%n;
        }
        else{
            int l,r; cin>>l>>r;
            l--,r--;
            l = (l+idx)%n;
            r = (r+idx)%n;
            if(l<=r){
                cout<<pre[r+1]-pre[l]<<endl;
            }
            else{
                int a = pre[n];
                int b = pre[l]-pre[r+1];
                cout<<a-b<<nl;
            }
        }
    }   
}

int32_t main() {
    fast
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}