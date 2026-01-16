//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).end(), (x).begin()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int cnt = 0,a=0,b=0;
    for(auto u : v){
        if(u == -1) a++;
        if(u == 0) cnt++;
    }
    if(a%2 != 0) {
        cnt += 2;
    }
    print(cnt);
    // for(int i=0; i<n; i++){
    //     int a; cin>>a;
    //     if(a == -1) cnt += 2;
    //     if(a == 0) cnt++;
    // }   
    // print(cnt);
}

int32_t main() {
    fast
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}