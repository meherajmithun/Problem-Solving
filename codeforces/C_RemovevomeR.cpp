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
    string s; cin>>s;
    int cnt = count(all(s) , '1');
    if(cnt==n){
        cout<<"1\n"; return;
    }
    cnt = count(all(s) , '0');
    if(cnt==n){
        cout<<"1\n"; return;
    }
    cnt = 1;
    for(int i=0; i<n-1; i++){
        if(s[i]!=s[i+1]) cnt++;
    }
    // cout<<cnt<<nl;
    if(cnt>2) cnt = 1;
    cout<<cnt<<nl;
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