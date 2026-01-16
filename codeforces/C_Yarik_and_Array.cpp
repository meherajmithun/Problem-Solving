//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
// #define INT_MAX LLONG_MAX
// #define INT_MIN LLONG_MIN
#define mod 1000000007

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    vector<bool>check(n , false);

    for(int i=1; i<n; i++){
        if((v[i]&1) and(v[i-1]&1)){
            check[i] = true;
        }
        else if(!(v[i]&1) and !(v[i-1]&1)) { check[i] = true;  }
    }  

    int sum = INT_MIN,ans = INT_MIN;

    for(int i=0; i<n; i++){
        if(check[i]){
            sum = INT_MIN;
        }
        sum = max(v[i] , sum+v[i]);
        ans = max(ans,sum);
    }
    print(ans);
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