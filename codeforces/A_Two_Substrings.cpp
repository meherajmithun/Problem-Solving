//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
#define double long double;

void solve() {
    string s; 
    cin >> s;

    vi ab, ba;

    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == 'A' and s[i + 1] == 'B') {
            ab.pb(i);
        } else if (s[i] == 'B' and s[i + 1] == 'A') {
            ba.pb(i);
        }
    }

    for (auto u : ab) {
        for (auto v : ba) {
            if (abs(u - v) > 1) {  //  no overlap
                yes;
                return;
            }
        }
    }

    no;
}

int32_t main() {
    slow;
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
