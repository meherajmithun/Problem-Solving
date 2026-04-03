#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    map<char,int>mp;
    vector<pair<int,char>>odd,even;
    for(auto a : s) mp[a]++;
    for(auto [a,b] : mp){
        if(b&1) odd.push_back({b,a});
        else even.push_back({b,a});
    }
    sort(odd.begin() , odd.end());
    sort(even.begin() , even.end());
    for(auto [a,b] : odd){
        while(a--) cout<<b;
    }
    for(auto [a,b] : even){
        while(a--) cout<<b;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}