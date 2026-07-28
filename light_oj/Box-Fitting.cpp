#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,w; cin>>n>>w;
    int sum = 0;
    for(int i=0; i<n; i++){
    	int a; cin>>a;
    	sum += a;
    }
    int ans = sum/w;
    if(sum%w!=0) ans++;
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