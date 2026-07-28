//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long

void solve() {
    int n;
    cin >> n;
    vi v(n);
    for (auto &u : v) cin >> u;
    sort(all(v));
    
    int cnt = 0;
    int l = 0, r = n - 1;
    
    while (l <= r) {
        int sum = v[r];
        r--;
        while (l <= r && sum + v[l] <= 4) {
            sum += v[l];
            l++;
        }
        cnt++;
    }
    
    cout << cnt << endl;
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
