// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
// const int N = 1e6+123;
// vector<int>cnt(N, 0);

// void pre(){
//     for(int i=1; i<N; i++){
//         for(int j=i; j<N; j+=i){
//             cnt[i]++;
//         }
//     }
// }

void solve() {
    int n; cin>>n;
    int ans = 0;
    for(int i=1; i<=n; i++){
        int cnt = 0;
        for(int j=i; j<=n; j+=i) cnt++;
        // cout<<cnt<<" "<<ans<<" ->"<<nl;
        ans += (1ll*cnt*cnt);
        // ans += cnt;
        // cout<<ans<<nl;
    }
    print(ans);
}

int32_t main() {
    fast
    // pre();
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}