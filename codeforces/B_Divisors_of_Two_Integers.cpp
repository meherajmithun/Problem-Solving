//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int x,y;
    sort(v.begin() , v.end());
    x = v.back();
    reverse(v.begin() , v.end());
    // for(auto u : v) cout<<u<<" ";
    // cout<<endl;
    for(int i=0; i<n; i++){
        if(x%v[i] != 0 ){
            cout<<x<<" "<<v[i];
            return;
        }
    }
    cout<<x<<" "<<v[1];
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