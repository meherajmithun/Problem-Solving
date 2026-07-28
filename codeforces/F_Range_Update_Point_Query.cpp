//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'

int digitSum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int singleDigit(int x) {
    while (x > 9) x = digitSum(x);
    return x;
}

void solve() {
    int n, query;
    cin >> n >> query;
    vector<int> digit(n);

    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        digit[i] = singleDigit(a);
    }

    while (query--) {
        int k; cin >> k;
        if (k == 1) {
            int l, r; cin >> l >> r;
            for (int i = l - 1; i < r; i++) {
                digit[i] = singleDigit(digit[i]);
            }
        } else {
            int x; cin >> x;
            cout << digit[x - 1] << endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; cin >> tc;
    while (tc--) solve();
    return 0;
}
