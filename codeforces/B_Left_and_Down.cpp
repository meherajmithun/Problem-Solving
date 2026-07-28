//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve() {
    int a,b,c; cin>>a>>b>>c;
    int t = __gcd(a,b);
    // cout<<t<<"-> ";

    if((a/t) <= c and (b/t) <= c){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
    
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