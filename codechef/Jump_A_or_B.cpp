//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n,m,a,b; cin>>n>>m>>a>>b;
    int x = m/a;
    int y = m/b;
    int z = m/(a+b);
    int baki1 = m-(x*a);
    int baki2 = m-(y*b);
    int baki3 = m-(z*(a+b));
    cout<<x<<" "<<y<<" "<<z<<endl;
    cout<<m-(baki1*(m-(x*a)))<<" "<<baki2<<" "<<baki3<<endl;

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}