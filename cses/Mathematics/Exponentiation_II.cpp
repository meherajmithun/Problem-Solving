#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
 
int f(int a, int b, int m) {
    if(b == 0) return 1;
    int k = f(a, b / 2, m);
    k = (k * k) % m;
    if(b & 1) {
        return (a * k) % m;
    }
    return k;
}
 
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int res = f(b, c, mod - 1);
    cout << f(a, res, mod) << '\n';
}
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve();
    }   
}