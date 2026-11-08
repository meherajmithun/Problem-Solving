// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

//Phi Function // O(sqrt(N))
int phi(int n) {
 int result = n;
 for (int i = 2; i * i <= n; i++) {
   if (n % i == 0) {
     while (n % i == 0) n /= i;
     result -= result / i;
   }
 }
 if (n > 1){ result -= result / n;  }
 return result;
}

void solve() {
    int a,m; cin>>a>>m;
    int g = gcd(a,m);
    m = m/g;
    // cout<<m<<" "<<g<<nl;
    cout<<phi(m)<<nl;
}

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}