// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n; cin>>n;
    map<int,int>mp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int a; cin>>a;
            mp[a]++;
        }
    }
    // for(auto [a,b] : mp) cout<<a<<" "<<b<<nl;
    for(auto [a,b] : mp){
        if(b>(n*(n-1))){
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