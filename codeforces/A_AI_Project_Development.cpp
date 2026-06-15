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
    int n,x,y,z; cin>>n>>x>>y>>z;
    int t1 = n/(x+y);
    if(n%(x+y)) t1++;
    // cout<<t1<<nl;
    if((x*z)>=n){
        int tmp = n/x;
        if(n%x) tmp++;
        cout<<min(tmp,t1)<<nl;
        return;
    }
    int ai = (x+10*y); //cout<<ai<<" ";
    int baki = n-(x*z); //cout<<baki<<" ";
    int t2 = baki/ai; t2 += z;
    if(baki%ai) t2++; //cout<<t2<<nl;
    cout<<min(t1,t2)<<nl;
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