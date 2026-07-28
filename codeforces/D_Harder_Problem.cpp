#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
    int n; cin >> n;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    map<int,int>mp;
    for(int i=0; i<n; i++){
        if(!mp[v[i]]){
            mp[v[i]]++;
            cout<<v[i]<<" ";
        }
    }
    for(int i=1; i<=n; i++){
        if(!mp[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}