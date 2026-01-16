#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void optimize(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    int n,m; 
    cin >> n >> m;
    if(n%m == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    optimize();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}