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
    int one=0,two=0;
    for(int i=0; i<n; i++){
        if(v[i] == 1) one++;
        else two++;
    }
    if(two){
        cout<<2<<" ";
        two--;
    }
    if(one){
        cout<<1<<" ";
        one--;
    }
    while(two--){
        cout<<2<<" ";
    }
    while(one--){
        cout<<1<<" ";
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