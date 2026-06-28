#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>v(n),ans,pre(n+1, 0);

    for(auto &a : v) cin>>a;

    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1] + v[i-1];
    }
    int p = INT_MAX,i=1,sum=0;
    for(auto a : v){
        sum += a;
        p = min(p, sum/i++);
        cout<<p<<" ";
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