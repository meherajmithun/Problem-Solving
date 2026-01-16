// IN THE NAME OF ALLAH

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
    int n, x, y;
    cin >> n >> x >> y;
    vi v(n);
    for (auto &u : v) cin >> u;

    map<int, vi> modGroups;
    for (int i = 0; i < n; i++) {
        modGroups[v[i] % x].push_back(v[i]);
    }

    int cnt = 0;
    for (auto &[modVal, nums] : modGroups) {
        // Check pairs within this group
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (abs(nums[i] - nums[j]) % y == 0) cnt++;
            }
        }
    }

    cout << cnt << endl;
}

int32_t main() {
    slow;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
