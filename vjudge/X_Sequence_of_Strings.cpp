#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
    int n; cin >> n;
    vector<string>v(n);
    for(auto &u : v) cin >> u;
    reverse(v.begin() ,v.end());
    for(auto u : v) cout<<u<<endl;
}
int main(){
    fast();
    int tc = 1; ///cin >> tc;
    while(tc--){
        solve();
    }
}