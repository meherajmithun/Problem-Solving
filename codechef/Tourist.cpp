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

void solve(){
    int n,a,b; cin>>n>>a>>b;
    int dis = INT_MAX;
    for(int i=0; i<n; i++){
        int x,y; cin>>x>>y;
        int s = abs(x-a);
        int t = abs(y-b);
        //int u = sqrt(s+t);
        dis = min(dis,(s+t));
    }    
    cout<<dis<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}
