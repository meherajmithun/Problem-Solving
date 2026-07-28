// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

void solve() {
    int a, b;
    cin >> a >> b;
    string b_str = to_string(b);
    string result = string(tgamma(a + 1), b_str[0]);
    int n = stoll(result);

    for (int i = 1; i <= n; i += 2) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << "\n";
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
