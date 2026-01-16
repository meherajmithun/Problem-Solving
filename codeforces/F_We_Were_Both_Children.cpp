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
    map<int,int>mp;
    for(int i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]]++;
    }   
    // for(auto u : mp) cout<<u.first<<" "<<u.second<<endl;
    vector<int>ans(n+1);
    for(auto u : mp){
        int val = u.first;
        int freq = u.second;
        for(int i=val; i<=n; i+=val){
            ans[i] += freq;
            //cout<<ans[i]<<" ";
        }
        //cout<<endl;
    }
    // for(auto u : ans) cout<<u<<" ";
    // cout<<endl;
    print(*max_element(ans.begin() , ans.end()));
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