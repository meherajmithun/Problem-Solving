#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (auto &u : v) cin >> u;

    vector<int> ekhane(n);
    multiset<int> seen;
    int k = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (seen.find(v[i]) == seen.end()) {
            k++;
            seen.insert(v[i]);
        }
        ekhane[i] = k;
    }

    while (m--) {
        int a;
        cin >> a;
        cout << ekhane[a - 1] << '\n';
    }
}
