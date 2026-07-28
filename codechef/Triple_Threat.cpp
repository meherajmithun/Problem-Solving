#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x; cin>>n>>x;
    string ans(3*n, '0');
    // cout<<ans<<endl;
    int t = x;
    for(int i=0; i<n; i++){
        int m = n-i-1;
        int k = 1;
        if(t<= 3*m+1){
            k = min(k, max(1ll*0, t-m));
        }
        else{
            k = min(1ll*3, max(1ll*2, t-m));
        }
        t -= k;
        if(k>=1) ans[i+2*n] = '1';
        if(k>=2) ans[i+n] = '1';
        if(k>=3) ans[i] = '1';
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