//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n; cin>>n;
    map<int,int>mp;
    int ans = 0;
    while(n--){
        int a; cin>>a;
        int cnt = 0;
        while(a>0){
            a /= 2;
            cnt++;
        }
        ans += mp[cnt];
        mp[cnt]++;
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