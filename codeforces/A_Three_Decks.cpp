//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int a,b,c; cin>>a>>b>>c;
    int s = a+b+c;
    if(s % 3 != 0){
        cout<<"NO"<<endl;
        return;
    }
    int l = s/3;
    if(l >= a && l >= b && l <= a + b + c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}