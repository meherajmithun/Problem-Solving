#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int x,y,a,b; cin>>x>>y>>a>>b;
    if(x>a){
        cout<<"Alice\n"; return;
    }
    if(x<a){
        cout<<"Bob\n"; return;
    }
    if(y>b){
        cout<<"Alice\n"; return;
    }
    if(y<b){
        cout<<"Bob\n"; return;
    }
    cout<<"Alice\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}