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
    int ans=0;
    vector<int>v2;
    for(int i=0; i<n; i++){
        if(i == 0){
            v2.push_back(v[i]+1);
            continue;
        }
        if(v[i]<=v[i-1]){
            v2.push_back(v2[i-1]+v[i]);
        }
        else{
            int lagbe = 0;
            for(int j=0; j<i; j++){
                if(v[j]<v[i]) {
                    lagbe += abs(v[j]-v[i]);
                    v[j] = v[i];
                }
            }
            lagbe += v2[i-1];
            lagbe += v[i];
            v2.push_back(lagbe);
        }
    }
    for(auto u : v2) cout<<u<<" ";
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