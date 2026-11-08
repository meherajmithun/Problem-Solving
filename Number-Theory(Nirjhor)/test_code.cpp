
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string n;
    cin >> n;

    int a = 0, b = 0;
    int digit = 0;

    for (char c : n) {
        int x = c - '0';
        digit += x;

        if (x == 2) a++;
        if (x == 3) b++;
    }

    if (digit % 9 == 0) {
        cout << "YES\n";
        return;
    }

    for (int i = 0; i <= min(b, 2); i++) {
        for (int j = 0; j <= min(a, 8); j++) {
            if ((digit + i * 6 + j * 2) % 9 == 0) {
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
