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
    int N; cin>>N;
    int n = N;
    vector<vector<int>>cs;
    int j=0;
    for(int i=1; i<=N; i++){
        int c; cin>>c;
        vector<int>v(c);
        for(auto &a : v) cin>>a;
        cs.push_back(v); j++;
    }
    int x; cin>>x;
    for(int i=0; i<n; i++){
        for(auto a : cs[i]) cout<<a<<" "; cout<<nl;
    }
}

int32_t main(){
    fast
    int tc=1;
    // cin >> tc;
    while(tc--){
        solve();
    }
}