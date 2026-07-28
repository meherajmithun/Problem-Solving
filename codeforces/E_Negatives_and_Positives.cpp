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
    sort(v.begin() , v.end());
    for(int i=0; i<n; i++){
        if(i == n-1) continue;
        if(v[i] < 0 and v[i+1] <= 0){
            v[i] *= -1;
            v[i+1] *= -1;
            i++;
        }
        else if(abs(v[i])>v[i+1]){
            v[i] *= -1;
            v[i+1] *= -1;
            i++;
        }
    }
    //for(auto u : v) cout<<u<<" ";

    int sum = 0;
    for(int i=0; i<n; i++) sum += v[i];
    cout<<sum<<'\n';  
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