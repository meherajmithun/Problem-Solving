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
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    int cnt = 0;
    for(int i=0; i<n; i++){
        int k = 1LL*v[i]*v[i];
        for(int j=v[i]; j<=min(n,k); j+=v[i]){
            int t = i+j;
            if(t<n and 1LL*v[t]*v[i] == j) cnt++;
            t = i-j;
            if(t>=0 and 1LL*v[t]*v[i] == j and v[i] != v[t]) cnt++; 
        }
    }   
    cout<<cnt<<nl;
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