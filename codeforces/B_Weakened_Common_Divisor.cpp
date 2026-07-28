// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve(){
    int n; cin>>n;
    int gcd = 0;
    int ans = 1;
    for(int i=0; i<n; i++){
        int a,b ; cin>>a>>b;
        if(__gcd(gcd,b)!=1) {gcd = __gcd(gcd,b) ;ans = __gcd(gcd,b); }
        else if(__gcd(gcd,a) != 1) {gcd = __gcd(a,gcd); ans = __gcd(a,gcd);}
        // else {ans = __gcd(gcd,a); gcd = __gcd(gcd,a);}
        else {gcd = 0; ans = 1;}
        cout<<ans<<" ";
    }
    if(ans==1) ans = -1;
    print(ans);
}

int32_t main(){
    fast
    int tc = 1; ///cin >> tc;
    while(tc--){
        solve();
    }
}