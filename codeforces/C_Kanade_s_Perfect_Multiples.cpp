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
    vector<int>visited(n+1, 0);
    sort(all(v));
    n = unique(all(v))-v.begin();
    vector<int>ans;
    for(int i=0; i<n; i++){
        if(visited[v[i]]) continue;
        for(int j=2*v[i]; j<=k; j+=v[i]){
            auto it = lower_bound(all(v), j);
            if(it!=v.end() and *it == j) {visited[it-v.begin()]=1;}
            else{
                cout<<"-1\n"; return;
            }
        }
    }
    for(int i=0; i<n; i++) {
        if(!visited[i]) ans.push_back(v[i]);
    }
    cout<<sz(ans)<<'\n';
    for(auto a : ans) cout<<a<<" "; cout<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}