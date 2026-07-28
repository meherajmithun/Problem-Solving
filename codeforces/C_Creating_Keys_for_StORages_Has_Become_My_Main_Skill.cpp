#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    if (n == 1) {
        cout << x << endl;
        return;
    }

    for (int i = 0; i < n - 1; ++i) {
        a[i] = i;
    }
    a[n - 1] = x;

    for(int i = 0; i < n - 1; i++){
        a[n-1] |= a[i];
    }
    for(int i = 0; i < n - 1; i++){
        a[n-1] ^= a[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}