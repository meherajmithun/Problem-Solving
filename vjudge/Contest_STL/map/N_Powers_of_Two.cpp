#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int main(){
    slow();
    int n; cin >> n;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    map<int,int>mp;
    for(int i=0; i<n; i++){
        mp[v[i]]++;
    }
    int ans = 0;
    for(auto u : v){
        ans += mp[u-31];
    }
    cout<<ans<<endl;
}