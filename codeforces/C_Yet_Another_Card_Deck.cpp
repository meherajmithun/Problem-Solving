//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n,query; cin>>n>>query;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    while(query--){
        int a; cin>>a;
        auto it = find(v.begin() , v.end() , a) - v.begin();
        cout<<it+1<<" ";
        rotate(v.begin(),v.begin()+it , v.begin()+it+1);
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}