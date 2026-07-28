// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define nl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
#define double long double

void solve() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    string t;
    cin >> t;

    x--, y--; 
    vector<pair<int, int>> p;

    for (char dir : t) {
        if (dir == 'L') {
            if (y > 0 && s[x][y - 1] != '#') {
                y--;
                if (s[x][y] == '@') p.pb(make_pair(x, y));
            }
        } else if (dir == 'D') {
            if (x < n - 1 && s[x + 1][y] != '#') {
                x++;
                if (s[x][y] == '@') p.pb(make_pair(x, y));
            }
        } else if (dir == 'R') {
            if (y < m - 1 && s[x][y + 1] != '#') {
                y++;
                if (s[x][y] == '@') p.pb(make_pair(x, y));
            }
        } else if (dir == 'U') {
            if (x > 0 && s[x - 1][y] != '#') {
                x--;
                if (s[x][y] == '@') p.pb(make_pair(x, y));
            }
        }
    }

    sort(all(p));
    p.erase(unique(all(p)), p.end());

    cout <<x+1<<" "<<y+1<<" "<< p.size() << nl;
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
