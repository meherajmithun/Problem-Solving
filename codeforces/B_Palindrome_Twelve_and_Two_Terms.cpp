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

bool check(int n){
    string s = to_string(n);
    int d = sz(s);
    for(int i=0,j=d-1; i<=(d/2); i++,j--){
        if(s[i]!=s[j]) return 0;
    }
    return 1;
}

void solve() {
    int n; cin>>n;
    for(int i=0; i<=n; i++){
        int a = n-i;
        if(a%12) continue;
        if(check(i)){
            cout<<i<<" "<<a<<nl;
            return;
        }
    }
    cout<<"-1\n";
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