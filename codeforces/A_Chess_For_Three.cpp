#include<bits/stdc++.h>
using namespace std;
#define ll long long

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}

void solve(){
    int n; cin >> n;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    int loss = 3;
    for(int i=0; i<n; i++){
        if(v[i] == loss){
            cout<<"NO"<<endl;
            return;
        }
        loss = 6-loss-v[i];
    }
    cout<<"YES"<<endl;
}
int main(){
	optimize();
    int tc = 1; //cin >> tc;
    while(tc--){
        solve();
    }
}