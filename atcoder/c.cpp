//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n,m; cin>>n>>m;
    vector<pair<int,int>>vp;
    for(int i=0; i<m; i++){
        int a,b; cin>>a>>b;
        vp.push_back({a,b});
    }
    sort(vp.begin() , vp.end());
    // for(auto u : vp){
    //     cout<<u.first<<" "<<u.second<<endl;
    // }
    int cnt =0;
    for(int i=1; i<m; i++){
        int a=vp[i].first;
        int b=vp[i-1].first;
      //  cout<<a<<" "<<b<<" "<<cnt<<endl;
        if(a != b){
            cnt++;
        }
    }
   // cout<<vp[n-1].first<<" "<<vp[n-2].first<<endl;
    if(vp[m-1].first != vp[m-2].first) cnt++;
    print(cnt);
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