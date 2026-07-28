#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string b, a;
    cin >> n >> b;
    a = "1"; 
    for (int i = 1; i < n; ++i) {
        if (a[i-1] == '1' && b[i-1] == '1') {
            a += '0';
        } else {
            a += '1';
        }
    }
    cout << a << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
