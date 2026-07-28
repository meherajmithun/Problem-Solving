#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k; cin >> n >> k;
    n -= k;
    k--;
    ll ans = n/(k);
    ans++;
    if(n%k != 0) ans++;
    cout<<ans<<'\n';
}


int main(){
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}