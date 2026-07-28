#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

bool custom(const pair<int,int>&a,const pair<int,int>&b){
    return a.first<b.first;
}

void solve(){
    int n; cin >> n;
    vector<pair<int,int>>v(n);
    for(auto &u : v) cin >> u.first>>u.second;
    sort(v.begin() , v.end(),custom);
    for(auto u : v){
        cout<<u.first<<" "<<u.second<<endl;
    }
}
int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}