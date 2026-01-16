//  IN THE NAME OF ALLAH
 
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;
 
void solve() {
    int n; cin>>n;
    int cnt = 0;
    for(int i=5; n/i>=1; i*=5){
        cnt += (n/i);
    }   
    print(cnt);
}
 
int32_t main() {
    fast
    int tc = 1;// cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}