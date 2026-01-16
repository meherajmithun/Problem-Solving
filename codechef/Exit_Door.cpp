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
    for(int i=0; i<n; i++) mp[v[i]]=i;
    
    vector<int>cs(n, 0);
    int ans = 0;
    for(int i=n; i>=1; i--){
        int k = mp[i];
        int l=0,r=0;
        for(int j=k-1; j>=0; j--){
            if(cs[j]==0) l++;
        }
        for(int j=k+1; j<n; j++){
            if(cs[j]==0) r++;
        }
        ans += min(l,r);
        cs[k] = 1;
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