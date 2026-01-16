//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};

void solve() {
    int n; cin >> n;
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
        if (fact > 10) break;
    }

    if (fact <= 10) {
        vector<int> v(n);
        for (int i = 0; i < n; i++) v[i] = i + 1;

        cout << fact << endl;

        do {
            for (auto u : v) cout << u << " ";
            cout << endl;
        } while (next_permutation(v.begin(), v.end()));

    } else {
        int k = min(n, 10);
        cout << k << endl;

        vector<int> v(n);
        for (int i = 0; i < n; i++) v[i] = i + 1;

        for (int i = 0; i < k; i++) {
            for (int j = 0; j < n; j++) {
                cout << v[(i + j) % n] << " ";
            }
            cout << endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}
