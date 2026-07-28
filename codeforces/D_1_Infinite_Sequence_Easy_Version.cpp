#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--) {
        ll n, l, r;
        cin >> n >> l >> r;

        vector<ll> v(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        vector<int> pre(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pre[i] = pre[i - 1] ^ v[i];
        }

        ll k = l;
        if (k <= n) {
            cout << v[k] << '\n';
        } else {
            ll h = k / 2;
            if (h > n) {
                ll tmp = pre[n];
                if (h % 2 == 1) {
                    cout << tmp << '\n';
                } else {
                    cout << 0 << '\n';
                }
            } else {
                cout << pre[h] << '\n';
            }
        }
    }
}