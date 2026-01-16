#include<iostream>
#include<vector>
#include<algorithm>
///#include<math>
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    vector<int>v(n+1),pre(n+1);
    bool paisilam = false;
    for(int i=1; i<=n; i++){
        cin >> v[i];
        pre[i] = pre[i-1] + v[i];
        if(pre[i] == m){
            paisilam = true;
        }
    }
    if(!paisilam){
        cout<<"YES"<<'\n';
        for(int i=1; i<=n; i++){
            cout<<v[i]<<" ";
        }
        cout<<'\n';
        return ;
    }
    paisilam = true;
    vector<int>second(n+1);
    reverse(v.begin() , v.end());
    // for(auto u : v) cout<<u<<" ";
    // cout<<endl;
    for(int i = 0; i<n; i++){
        second[i+1] = second[i] + v[i];
        if(second[i+1] == m){
            paisilam = false;
            cout<<"NO"<<'\n';
            return ;
        }
    }
    if(paisilam){
        cout<<"YES"<<'\n';
        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}