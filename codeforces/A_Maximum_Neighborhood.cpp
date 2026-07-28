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
    int n; cin>>n;
    int ans = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int s = ((i-1)*n)+j;
            int mx = s;
            if(i>1) mx += s-n;
            if(i<n) mx += s+n;
            if(j>1) mx += s-1;
            if(j<n) mx += s+1;
            // cout<<mx<<" ";
            ans = max(ans,mx);
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