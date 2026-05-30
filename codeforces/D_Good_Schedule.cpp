#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int multTestQ;
    cin >> multTestQ;

    while (multTestQ--) {
        int n;
        cin >> n;

        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];

        vector<int> posA(n + 1), posB(n + 1);

        for (int i = 1; i <= n; i++) {
            posA[a[i]] = i;
            posB[b[i]] = i;
        }

        vector<pair<int,int>> badIntervals;

        for (int x = 1; x <= n; x++) {
            if (posA[x] != posB[x]) {
                badIntervals.push_back({min(posA[x], posB[x]),
                                        max(posA[x], posB[x])});
            }
        }

        sort(badIntervals.begin(), badIntervals.end());

        long long ans = 0;
        int l = 1;

        int j = 0;
        int maxR = 0;

        for (int r = 1; r <= n; r++) {

            while (j < (int)badIntervals.size() && badIntervals[j].first <= r) {
                maxR = max(maxR, badIntervals[j].second);
                j++;
            }

            while (l <= maxR && l <= r) {
                l++;
            }

            ans += (r - l + 1);
        }

        cout << ans << "\n";
    }

    return 0;
}