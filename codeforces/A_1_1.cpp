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
    string s; cin>>s;
    for(int i=1; i<n-1; i++){
        if(s[i-1]=='1' and s[i+1]=='1') s[i]='1';
    }
    int mx = count(all(s),'1');
    for(int i=1; i<n-1; i++){
        if(s[i-1]=='1' and s[i+1]=='1') s[i]='0';
    }
    int mn = count(all(s),'1');
    cout<<mn<<" "<<mx<<nl;
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