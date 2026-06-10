#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,c; cin>>a>>b>>c;
    if(a==b){
        cout<<"0\n";
    }
    else if(gcd(a,c)==gcd(b,c)){
        cout<<"1\n";
    }
    else if(gcd(a,c+1)==gcd(b,c+1)){
        cout<<"2\n";
    }
    else cout<<"3\n";
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