#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s; cin>>s;
    if(s[0]=='c' or s[3] == 'f') cout<<"Yes\n";
    else cout<<"No\n";
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