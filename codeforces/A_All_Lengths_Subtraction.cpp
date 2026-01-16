//  IN THE NAME OF ALLAH

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

bool zero(vector<int>&v,int n){
    for(int i=0; i<n; i++){
        if(v[i] != 0) {
            return 0;
        }
    }
    return 1;
}

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    map<int,int>mp;
    while(1){
        int mx = 0,val=0;
        for(int i=0;i<n; i++){
            if(val<v[i]){
                val = v[i];
                mx = i;
            }
        }
        int l=mx-1,r=mx+1;
        while(v[mx]==v[l] or v[mx] == v[r]){
            if(v[mx]==v[l]) l--;
            if(v[mx] == v[r]) r++;
        }
        int len = r-l-1;
        if(mp[len]){
            cout<<"NO\n";
            return;
        }
        for(int k=l+1; k<r; k++){
            v[k]--;
            if(v[k] < 0) {
                cout<<"NO\n";
                return;
            }
        }
        mp[len]++;
        if(zero(v,n)){
            cout<<"YES\n";
            return;
        }
    }
}

int32_t main() {
    fast
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}