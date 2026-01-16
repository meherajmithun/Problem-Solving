#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(vector<int>& a, int n) {
    set<int> distinct(a.begin(), a.end());

    if (distinct.size() < n) {
        // Case 2: Duplicate elements exist, 1 operation is enough
        return 1;
    }

    if (distinct.count(0)) {
        // Case 1: All elements already contain 0, 1 operation is enough
        return 1;
    }

    // Case 3: No zero and all elements are unique
    return 2;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << solve(a, n) << endl;
    }

    return 0;
}
