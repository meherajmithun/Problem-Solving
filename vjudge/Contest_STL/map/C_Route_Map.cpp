#include<bits/stdc++.h>
using namespace std;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int main(){
    slow();
    int n,m; cin >> n >> m;
    vector<string>s1(n),s2(m);
    for(auto &u : s1) cin >> u;
    for(auto &u : s2) cin >> u;
    map<string,int>mp;
    for(auto u : s2) mp[u]++;
    for(auto u : s1){
        mp[u]++;
        if(mp[u] >= 2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}