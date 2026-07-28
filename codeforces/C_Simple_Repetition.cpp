#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool is_prime(int n) {
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

void solve() {
    string s;
    int k;
    cin >> s >> k;

    string s2;
    for(int i = 0; i < k && s2.size() <= 18; i++) {
        s2 += s;
    }

    if(s2.size() > 18) {
        cout << "NO" << endl;
        return;
    }

    int num = stoll(s2);
    if(is_prime(num)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }
}
