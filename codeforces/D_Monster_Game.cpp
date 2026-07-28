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
    vector<int>a(n),b(n);
    for(auto &a : a) cin>>a;
    for(auto &a : b) cin>>a;
    
    vector<int>pre(n);
    pre[0] = b[0];
    for(int i=1; i<n; i++){
        pre[i] = pre[i-1]+b[i];
    }
    // for(auto a : pre) cout<<a<<" "; cout<<nl;
    sort(all(a));
    int ans = -1;
    for(int i=0; i<n; i++){
        int x = n-i;
        auto lb = upper_bound(all(pre),x)-pre.begin();
        ans = max(ans, lb*a[i]);
    }
    cout<<ans<<nl;
    
}

int32_t main(){
    fast
    int tc=1;
    cin >> tc;
    int C = 1;
    while(tc--){
        // cout << "Case " << C++ << ": ";
        solve();
    }
}