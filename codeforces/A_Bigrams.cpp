#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    if(n==1){
        int a; cin>>a;
        if(a>1) cout<<"YES\n";
        else cout<<"NO\n";
        return;
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(a>1) cnt++;
    }
    if(cnt>=1) cout<<"YES\n";
    else cout<<"NO\n";
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