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
    int n,k; cin>>n>>k;
    
    vector<int>v(n);

    for(auto &a : v ) cin>>a;
    
    int ans = INT_MIN;
    for(int i=n-1; i>=max(1LL*0,n-130); i--)  {
        for(int j=i-1; j>=max(1LL*0, n-130); j--){
            ans = max(ans,(i+1)*(j+1)- (k*(v[i]|v[j])));
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