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
    vector<pair<int,int>>vp(n);
    int j=1;
    for(int i=0; i<n; i++){
        vp[i] = {v[i],j}; 
        j *= -1;
    }   
    sort(all(vp));
    // for(auto [a,b] : vp) cout<<a<<" "<<b<<nl;
    for(int i=0; i<n-1; i++){
            if(vp[i].second==vp[i+1].second){
                cout<<"NO\n"; return;
            }
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