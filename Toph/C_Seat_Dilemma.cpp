#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<<x<<'\n';

void solve(){
    int n; cin >> n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int mx = INT_MIN;
    map<int, int>mp;
    int l=0,r=0;
    while(r<n){
        mp[v[r]]++;
        if(mp[v[r]] == 2){
            while(mp[v[r]] != 2){
                mp[v[l]]--;
                l++;
            }
            mx = max(mx , r-l-1);
            l = 0;
        }
        r++;
    }
    print(mx);
    
}

int main(){
    int tc = 1; //cin >> tc = =1;
    while(tc--){
        solve();
    }
}