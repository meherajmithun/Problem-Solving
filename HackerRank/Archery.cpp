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
const int limit = 1000000+123;

int lcm(int a,int b){
	return a/(__gcd(a,b)) * b;
}
void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    int g=0,ans=1;
    for(auto a : v){
        g = __gcd(a,g);
        ans = lcm(ans,a);
    }
    cout<<ans<<nl;
}
// 19424160
// 150050160
// 1226266176330
// 2419560

int32_t main(){
    fast
    // harmonic();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}