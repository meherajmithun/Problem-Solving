#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Check if the fixed elements already have a subarray sum > k
    // Compute max subarray sum treating 0s (s[i]='0') as 0.
    ll max_fixed = LLONG_MIN;
    ll current = 0;
    for (ll i = 0; i < n; ++i) {
        ll val = (s[i] == '1') ? a[i] : 0;
        if (current + val > val) {
            current += val;
        } else {
            current = val;
        }
        if (current > max_fixed) {
            max_fixed = current;
        }
    }
    if (max_fixed > k) {
        cout << "No\n";
        return;
    }

    // Now, need to fill 0s to make the max exactly k.
    bool has_zero = false;
    for (char c : s) {
        if (c == '0') {
            has_zero = true;
            break;
        }
    }
    if (!has_zero) {
        if (max_fixed == k) {
            cout << "Yes\n";
            for (ll num : a) {
                cout << num << " ";
            }
            cout << "\n";
        } else {
            cout << "No\n";
        }
        return;
    }

    // There are zeros; we can adjust them.
    // The idea is to ensure that there's at least one segment that sums to k, and others <=k.
    // One way: find a position i where s[i] is 0, set a[i] = X such that some subarray including X sums to k.
    // The other 0s can be set to very negative numbers to prevent other subarrays from exceeding k.

    // Find if there exists a position i (s[i] = '0') that can be part of a subarray summing to k.
    // Alternatively, we can create a new segment that includes some 0s and possibly some 1s.

    // Let's compute prefix and suffix sums for fixed elements.
    vector<ll> prefix(n + 1, 0), suffix(n + 1, 0);
    vector<ll> prefix_max(n + 1, 0), suffix_max(n + 1, 0);

    ll sum = 0;
    for (ll i = 0; i < n; ++i) {
        ll val = (s[i] == '1') ? a[i] : 0;
        sum += val;
        prefix[i + 1] = sum;
    }

    sum = 0;
    for (ll i = n - 1; i >= 0; --i) {
        ll val = (s[i] == '1') ? a[i] : 0;
        sum += val;
        suffix[i] = sum;
    }

    // Compute prefix_max and suffix_max.
    // prefix_max[i] is the maximum prefix up to i (0..i-1 in original array)
    prefix_max[0] = 0;
    sum = 0;
    for (ll i = 0; i < n; ++i) {
        ll val = (s[i] == '1') ? a[i] : 0;
        sum += val;
        if (i == 0) {
            prefix_max[i + 1] = max(prefix_max[i], sum);
        } else {
            prefix_max[i + 1] = max(prefix_max[i], sum);
        }
    }

    suffix_max[n] = 0;
    sum = 0;
    for (ll i = n - 1; i >= 0; --i) {
        ll val = (s[i] == '1') ? a[i] : 0;
        sum += val;
        if (i == n - 1) {
            suffix_max[i] = max(suffix_max[i + 1], sum);
        } else {
            suffix_max[i] = max(suffix_max[i + 1], sum);
        }
    }

    bool possible = false;
    for (ll i = 0; i < n; ++i) {
        if (s[i] == '0') {
            possible = true;
            break;
        }
    }
    if (!possible && max_fixed != k) {
        cout << "No\n";
        return;
    }

    // We can proceed to construct the array.
    // The plan is:
    // For each zero in s[i], set a[i] such that in some window including it, the sum is k.
    // Other zeros are set to -infinity to ensure their segments don't contribute.

    // Find the best position to set a zero to a value that creates a window with sum k.
    // For each i where s[i] is '0', compute the required value:
    // The value is k - (sum of known elements in a window around i).

    // We can choose any zero, set it to a value that makes some window sum to k, and set others to -1e18.
    // For example, choose the first zero, set it to k, and others to -1e18.
    // But need to ensure that other windows don't exceed k.

    // Alternatively, set one zero to a value that makes a maximal window sum to k.
    // Let's select the first zero in s.

    ll pos = -1;
    for (ll i = 0; i < n; ++i) {
        if (s[i] == '0') {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        if (max_fixed == k) {
            cout << "Yes\n";
            for (ll num : a) {
                cout << num << " ";
            }
            cout << "\n";
        } else {
            cout << "No\n";
        }
        return;
    }

    // Now, set a[pos] such that the maximal window including pos has sum k.
    // The maximal window is left_sum + a[pos] + right_sum = k.
    // left_sum is the maximum sum ending at pos-1 (prefix_max[i]).
    // right_sum is the maximum sum starting at pos+1 (suffix_max[i+1]).
    ll left_part = (pos > 0) ? prefix_max[pos] : 0;
    ll right_part = (pos < n - 1) ? suffix_max[pos + 1] : 0;
    ll new_val = k - left_part - right_part;
    a[pos] = new_val;

    // Set all other zeros to -1e18.
    for (ll i = 0; i < n; ++i) {
        if (s[i] == '0' && i != pos) {
            a[i] = -1e18;
        }
    }

    // Verify that the max subarray sum is indeed k.
    ll max_sum = LLONG_MIN;
    current = 0;
    for (ll i = 0; i < n; ++i) {
        ll val = a[i];
        if (current + val > val) {
            current += val;
        } else {
            current = val;
        }
        if (current > max_sum) {
            max_sum = current;
        }
    }
    if (max_sum == k) {
        cout << "Yes\n";
        for (ll num : a) {
            cout << num << " ";
        }
        cout << "\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}