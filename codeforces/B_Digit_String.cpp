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
    string s; cin>>s;
    int n = sz(s);
    int cnt=0;
    for(auto c : s){
        if(c=='1' or c=='3') cnt++;
    }
    // cout<<cnt<<nl;

    int c2=0,mx=cnt;
    for(auto c : s){
        // cout<<"age "<<c2<<" "<<cnt<<" -> "<<mx<<nl;
        if(c=='2') c2++;
        else if(c=='1' or c=='3') cnt--;
        // cout<<c2<<" "<<cnt<<nl;
        mx = max(mx, c2+cnt);

        // cout<<"pore "<<c2<<" "<<cnt<<" -> "<<mx<<nl;

    }
    cout<<n-mx<<nl;

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