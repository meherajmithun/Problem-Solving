#include <iostream>
using namespace std;

long long cost(long long k) {
    return k * (k + 1) / 2;
}

void solve() {
    long long h, d;
    cin >> h >> d;

    long long low = 1, high = d + 1, ans = d + 1;
    while (low <= high) {
        long long x = (low + high) / 2;
        long long q = d / x, r = d % x;
        long long maxSeg = (d + x - 1) / x;
        long long total = r * cost(q + 1) + (x - r) * cost(q);
        if (h >= cost(maxSeg) + 1 && h + x - 1 >= total + 1) {
            ans = x;
            high = x - 1;
        } else {
            low = x + 1;
        }
    }

    cout << d + ans - 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
