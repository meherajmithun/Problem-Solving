#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m; cin>>n>>m;
    string a,b; cin>>a>>b;
    for(int i=0; i<min(n,m); i++){
        if(a[i]==b[i]) cout<<a[i];
        else break;
    }
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}