#include <bits/stdc++.h>
using namespace std;

// Count subarrays with at most K distinct elements
long long atMostK(const vector<int>& a, int n, int K, int l, int r) {
    unordered_map<int, int> freq;
    long long res = 0;
    int left = 0;

    for (int right = 0; right < n; ++right) {
        freq[a[right]]++;

        while ((int)freq.size() > K) {
            freq[a[left]]--;
            if (freq[a[left]] == 0) freq.erase(a[left]);
            left++;
        }

        // Count valid subarrays ending at 'right' within length [l, r]
        int maxLeft = right - l + 1;
        int minLeft = max(left, right - r + 1);

        if (maxLeft >= minLeft) {
            res += maxLeft - minLeft + 1;
        }
    }
    return res;
}

void solve() {
    int n, k, l, r;
    cin >> n >> k >> l >> r;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    // Number of subarrays with exactly k distinct = atMostK(k) - atMostK(k-1)
    long long ans = atMostK(a, n, k, l, r) - atMostK(a, n, k - 1, l, r);
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
