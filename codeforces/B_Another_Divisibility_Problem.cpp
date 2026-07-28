// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x; cin >> x;
        int d = to_string(x).size();

        long long p = 1;
        for (int i = 0; i < d; ++i) p *= 10;         // p = 10^d
        long long y = (p - 1) - x;                   // try 10^d - 1 - x

        if (y == 0) {                                // fallback if zero
            p *= 10;                                 // p = 10^(d+1)
            y = (p - 1) - x;
        }

        cout << y << "\n";
    }
    return 0;
}
