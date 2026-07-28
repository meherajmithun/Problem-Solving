// IN THE NAME OF ALLAH

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
const int  N = 100000;

void solve(){
    int x,m; cin>>x>>m;
    int ans = 0;
    for(int i=1; i<=min(m, 2*x); i++){
        if(i==x) continue;

        int d = x^i;
        if(x%d==0 or i%d==0) ans++;
    }   
    cout<<ans<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}