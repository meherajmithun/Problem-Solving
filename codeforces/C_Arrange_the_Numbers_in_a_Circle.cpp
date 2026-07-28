#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int multTestQ;
    cin >> multTestQ;

    while (multTestQ--) {
        int n;
        cin >> n;

        vector<long long> c(n);
        for (auto &x : c) cin >> x;

        long long sum = 0, mx = 0;

        for (auto x : c) {
            sum += x;
            mx = max(mx, x);
        }

        long long others = sum - mx;

        if (mx > others + 1) {
            cout << 2 * others + 1 << "\n";
        } else {
            cout << sum << "\n";
        }
    }

    return 0;
}