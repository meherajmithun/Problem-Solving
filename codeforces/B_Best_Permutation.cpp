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
    vector<int>ans(n);
    for(int i=1; i<=n; i++) ans[i-1] = i;
    if(n&1){
        for(int i=1; i<n-2; i+=2) swap(ans[i],ans[i+1]);
    }
    else{
        for(int i=1; i<n-2; i+=2) swap(ans[i],ans[i+1]);
    }
    for(auto a : ans) cout<<a<<" "; cout<<nl;
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