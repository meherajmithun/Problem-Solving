#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    int z=0,o=0;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(a==0) z++;
        if(a==1) o++;
    }
    if(z==0) cout<<"NO\n";
    else if(z==1) cout<<"YES\n";
    else if(o==0 and z==2) cout<<"NO\n";
    else if(z>1 and o>0) cout<<"YES\n";
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