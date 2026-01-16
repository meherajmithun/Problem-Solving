// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    --x; // 0-based indexing

    set<int> empty;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '.' && i != x) {
            empty.insert(i);
        }
    }

    int days = 0;
    while (true) {
        // Check if Hamid can escape to the left
        auto it_left = empty.lower_bound(x);
        bool can_left = (it_left != empty.begin());

        // Check if Hamid can escape to the right
        auto it_right = empty.upper_bound(x);
        bool can_right = (it_right != empty.end());

        // If he cannot move either way, he escapes
        if (!can_left && !can_right) {
            cout << days + 1 << '\n';
            return;
        }

        // Mani blocks a cell — try to block farther side
        int dist_left = can_left ? x - *prev(it_left) : -1;
        int dist_right = can_right ? *it_right - x : -1;

        if (dist_left > dist_right) {
            empty.erase(*prev(it_left));
        } else {
            empty.erase(*it_right);
        }

        // Hamid moves
        if (can_left && (!can_right || dist_left <= dist_right)) {
            x = *prev(it_left); // go left
        } else {
            x = *it_right; // go right
        }

        days++;
    }
    cout<<days<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
