//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define ll long long
const ll N = (ll) 3e7+5;
const ll mod = (ll) 1e9+7;
const ll inf = (ll) 1e18;
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve() {
    int n,m; cin>>n>>m;
    vector<pair<int,int>>vp;
    for(int i=0; i<n; i++){
        int a,b; cin>>a>>b;
        vp.push_back({a,b});
    }
    int ans = 0,a=0,b=0;
    for(auto u : vp){
        int x = u.first;
        int y = u.second;
        int k = x-a;
        int check = x-a;
        if( k%2 != (y != b)){
            check--;
        }
        if(check < 0) check = 0;
        ans += check;
        a = x,b = y;
    }
    ans += (m-a);
    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}