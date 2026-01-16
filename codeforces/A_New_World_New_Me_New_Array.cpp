#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, k, p;
    cin >> n >> k >> p;

    
    if (k == 0) {
        cout << 0 << "\n";
        return;
    }

    if (k < -p * n || k > p * n) {
        cout << -1 << "\n";
        return;
    }

    int opr = (abs(k) + p - 1) / p;
    if (opr > n) {
        cout << -1 << "\n";
    } else {
        cout << opr << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
