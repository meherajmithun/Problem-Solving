#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<string>v(n);
    for(auto &u : v) cin>>u;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}