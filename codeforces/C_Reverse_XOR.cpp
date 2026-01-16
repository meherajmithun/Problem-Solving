// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
using namespace std;

bool isPowerOfTwo(long long n) {
    return n > 0 && (n & (n - 1)) == 0;
}

void solve() {
    long long n;
    cin >> n;
    if(n&1) {
        cout<<"NO\n";
        return;
    }
    if (n == 0 || !isPowerOfTwo(n)) cout << "YES\n";
    else cout << "NO\n";
}

int32_t main() {
    fast
    int t;
    cin >> t;
    while (t--) solve();
}
