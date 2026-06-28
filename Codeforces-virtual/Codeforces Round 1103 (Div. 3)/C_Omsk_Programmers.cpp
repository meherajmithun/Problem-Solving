#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,x; cin>>a>>b>>x;
    if(a==b){
        cout<<"0\n"; return;
    }
    int ans = abs(a-b);
    int cnt = 0;
    while(a!=b){
        if(a<b) swap(a,b);
        a /= x;
        cnt++;
        ans = min(ans,cnt+abs(a-b));
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