//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007
#define pi  (2*acos(0.0))

void solve() {
    double n; cin>>n;
    double k = n*n*pi;
    double t = (n+n) * (n+n);
    cout<<fixed<<setprecision(2)<<t-k<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; cin >> tc;
    int c=1;
    while (tc--) {
        cout<<"Case "<<c++<<": "s; 
        solve();
    }
    return 0;
}