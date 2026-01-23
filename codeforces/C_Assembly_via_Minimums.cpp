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
    int m = (n*(n-1))/2;
    vector<int>v(m);
    for(auto &a : v)cin>>a;
    sort(all(v));
    int mx = 1000000000;
    // for(auto a : v) cout<<a<<" "; cout<<nl;
    map<int,int>mp;
    for(int i=0; i<m; i+=n){
        cout<<v[i]<<" ";
        n--;
    }
    cout<<mx;
    cout<<nl;

    
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}