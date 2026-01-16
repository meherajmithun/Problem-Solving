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
    int n; 
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a; 
        cin >> a;
        sum += a;
    }

    // Find the minimum `ans` such that (ans + sum) % (n + 1) != 1
    for (int ans = 1; ans <= n + 1; ans++) {
        if ((ans + sum) % (n + 1) != 1) {
            cout << ans << endl;
            return;
        }
    }
}

int32_t main() {
    slow;
    int tc = 1;
    // cin >> tc; // Uncomment if multiple test cases
    while (tc--) {
        solve();
    }
    return 0;
}
