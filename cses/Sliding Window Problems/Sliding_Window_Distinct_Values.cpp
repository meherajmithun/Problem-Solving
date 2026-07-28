//  IN THE NAME OF ALLAH
 
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007
 
void solve() {
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    map<int,int>mp;
    for(int i=0; i<k; i++) mp[v[i]]++;
    int l=0,r=k-1;
    while(r<n){
        cout<<mp.size()<<" ";
        mp[v[l]]--;
        if(mp[v[l]] == 0) mp.erase(v[l]);
        r++,l++;
        mp[v[r]]++;
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