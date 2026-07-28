#include<bits/stdc++.h>
using namespace std;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
    int n; cin >> n;
    vector<long long>v(n);
    for(auto &u : v) cin >> u;
    for(int i=0; i<n; i++){
        int l = 2 * max((n-i-1) , i);
        if(v[i] <= l){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}