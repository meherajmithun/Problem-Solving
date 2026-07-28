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
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    map<int,int>mp;
    for(auto a : v) mp[a]++;
    int mex = 0;
    while(mp.count(mex)) mex++;

    if(mex == 0){
        cout<<"NO\n"; return;
    }
    if(mex == 1){
        if(mp[0]==1) cout<<"YES\n";
        else cout<<"NO\n";
        return;
    }
    cout<<"YES\n"; 
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}