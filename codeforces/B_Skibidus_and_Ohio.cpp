#include <bits/stdc++.h>
using namespace std;
#define ll long long

void slow() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

void solve() {
    string s;
    cin >> s;
    int i = 0;
    while (i < s.size() - 1) {
        if (s[i] == s[i + 1]) {
            cout<<1<<endl;
            return;
        }
        i++;
    }
    cout << (int)s.size() << endl;
}

int main() {
    slow();
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
