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
    int ans = 0;
    bool gese = false;
    for(int i=1; i<n; i++){
        if(v[i-1] > v[i]){
            gese = true;
        }
        else if(v[i-1] < v[i]){
            if(gese){
                ans++;
                gese = 0;
            }
        }
    }   
    ans++;
    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}