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
    map<int,int>mp;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i]; mp[v[i]]++;
    }   
    sort(all(v));
    int ans = 1;
    for(int i=1; i<=n; i++){
        auto x = lower_bound(all(v),4*i)-v.begin();
        x -= (mp[2*i]+mp[i]+mp[3*i]);
        
        if(x<=k) ans = max(ans,i);
    }
    
    print(ans);
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}