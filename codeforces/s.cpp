#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        priority_queue<pair<ll, int>> pq;
        for (int i = 0; i < n; ++i) {
            pq.push({a[i], i});
        }

        ll score = 0;
        while (k > 0 && !pq.empty()) {
            ll val = pq.top().first;
            int idx = pq.top().second;
            pq.pop();

            score += val;
            a[idx] = max(0, a[idx] - b[idx]);
            if (a[idx] > 0) {
                pq.push({a[idx], idx});
            }
            k--;
        }

        cout << score << endl;
    }

    return 0;
}
