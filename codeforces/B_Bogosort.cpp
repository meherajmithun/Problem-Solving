#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void optimize(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    int n; cin >> n;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    vector<int>ans;
    sort(v.rbegin() , v.rend());
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((j-v[j]) != (i-v[i])){
                ans.push_back(v[i]);
            }
        }
    }
    for(auto u : v) cout<<u<<" ";
        cout<<endl;
}
int main(){
    optimize();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}