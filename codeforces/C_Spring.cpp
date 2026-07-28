// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve () {
    int a, b, c, m; cin >> a >> b >> c >> m;

    int ab = a * b / __gcd(a,b);
    int ac = a * c / __gcd(a,c);
    int bc = b * c / __gcd(b,c);
    int abc = __int128_t(ab) * ac / __gcd(ab,ac);

    // cout<<ab<<" "<<ac<<" "<<bc<<" -> "<<abc<<nl;

    int oa = m / a;
    int ob = m / b;
    int oc = m / c;
    ab = m / ab;
    ac = m / ac;
    bc = m / bc;
    abc = m / abc;
    // cout<<oa<<" "<<ob<<" "<<oc<<nl;
    // cout<<ab<<" "<<ac<<" "<<bc<<" -> "<<abc<<nl;

    int ans1 = oa * 6 - ab * 3 - ac * 3 + abc * 2;
    int ans2 = ob * 6 - ab * 3 - bc * 3 + abc * 2;
    int ans3 = oc * 6 - ac * 3 - bc * 3 + abc * 2;
    cout << ans1 << " " << ans2 << " " << ans3 << "\n";
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