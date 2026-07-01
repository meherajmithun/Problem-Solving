#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int x,y; cin>>x>>y;
    int ans = 0;
    while(x!=y){
        int k = x/10;
        if(x%10) k++;
        ans += k;
        x--;
    }
    cout<<ans<<endl;
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