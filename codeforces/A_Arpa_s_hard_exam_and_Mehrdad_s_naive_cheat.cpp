//  IN THE NAME OF ALLAH
 
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007
 
int modulo(int a,int b){
    if(b == 0) return 1;
    int k = modulo(a,b/2);
    if(b&1){
        return (a*((k*k)%mod))%mod;
    }
    return (k*k)%mod;
}
void solve() {
    int a=8;
    int b; cin>>b;
    int res = modulo(a,b);
    print(res%10);   
}
 
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}