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
    int n,m; cin>>n>>m;
    vector<int>a(n),b(m);
    for(auto &x : a) cin>>x;
    for(auto &x : b) cin>>x;
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i]>b[j]) ans++;
        }
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