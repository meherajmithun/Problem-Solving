// IN THE NAME OF ALLAH
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'

void solve(){
    int n; cin>>n;
    vector<int>f(n+1),ans(n+1);
    for(int i=1; i<=n; i++) cin>>f[i];
    
    for(int i=2; i<n; i++){
        ans[i] = ((f[i+1]-f[i])-(f[i]-f[i-1]))  /2;
    }
    ans[1] = f[n];

    for(int i=2; i<n; i++){
        ans[1] -= (n-i)*ans[i];
    }
    ans[1] /= (n-1);

    ans[n] = f[1];
    for(int i=1; i<n; i++){
        ans[n] -= ((i-1)*ans[i]);
    }
    ans[n] /= (n-1);

    
    for(int i=1; i<=n; i++) cout<<ans[i]<<" "; cout<<nl;
    
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