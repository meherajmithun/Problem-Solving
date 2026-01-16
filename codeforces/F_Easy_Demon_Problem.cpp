#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    // Calculate row and column sums
    vector<long long> row_sum(n), col_sum(m);
    long long total_sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            total_sum += a[i] * b[j];
            row_sum[i] += a[i] * b[j];
            col_sum[j] += a[i] * b[j];
        }
    }

    while (q--) {
        long long target_beauty;
        cin >> target_beauty;

        bool found = false;
        for (int i = 0; i < n && !found; ++i) {
            if (total_sum - 2 * row_sum[i] == target_beauty) {
                found = true;
                break;
            }
        }
        for (int j = 0; j < m && !found; ++j) {
            if (total_sum - 2 * col_sum[j] == target_beauty) {
                found = true;
                break;
            }
        }

        cout << (found ? "YES\n" : "NO\n");
    }

    return 0;
}