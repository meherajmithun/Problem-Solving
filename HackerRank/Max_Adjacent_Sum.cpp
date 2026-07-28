#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>v(n+1 , 0);
    int a=-1,b=-1;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        if(i&1) a = max(a,x);
        else b = max(b,x);
    }
    cout<<a+b<<endl;
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