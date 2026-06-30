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

void solve() {
    int n; cin>>n;
    vector<int>a(n), b(n);
    for(auto &a : a) cin>>a;
    for(auto &a : b) cin>>a;
    
    int sum = 0;
    
    for(int i=0; i<n; i++){
        sum -= a[i];
        sum += b[i];
        if(sum<0){
            cout<<"NO\n"; return;
        }
    }
    cout<<"YES\n";
}

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}