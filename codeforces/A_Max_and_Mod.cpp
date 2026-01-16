#include <iostream>
using namespace std;

bool isValid(const vector<int>& p) {
    int n = p.size();
    for (int i = 1; i < n; ++i) {
        int mx = max(p[i - 1], p[i]);
        if (mx % (i + 1) != i) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 2 || n == 4) {
            cout << "-1\n";
            continue;
        }

        // Try reverse permutation
        for (int i = n; i >= 1; --i) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
