// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    if(n&1){
        cout<<"NO\n"; return;
    }
    int a=0,b=0;
    for(auto i : v){
        if(i==1) a++;
        else b+=i;
    }
    // cout<<a<<" "<<b<<nl;
    if(a==b){
        cout<<"YES\n"; return;
    }
    if((a+b)%4==0) cout<<"YES\n";
    else cout<<"NO\n";
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