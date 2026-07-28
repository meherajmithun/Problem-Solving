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
    vector<int>v;
    map<int,int>mp;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(mp[a]==0){
            v.push_back(a);
        }
        mp[a]++;
    }   
    sort(all(v));
    n = sz(v);
    // for(auto a : v) cout<<a<<" "; cout<<nl;
    int l=0,r=0;
    int ans=-1;
    while(r<n){
        if(v[r]-v[l] > r-l) l++;
        ans = max(ans,r-l+1);
        r++;
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