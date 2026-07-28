#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int z; cin>>z;

    int cnt = 0;

    for(int i=1; i<=z; i++){
        for(int j=1; 1LL*i*j<=z; j++){
            if(gcd(i,j)==1){
                cnt += (z/(1LL*i*j));
            }
        }
    }
    cout<<1LL*z*z-cnt<<endl;

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