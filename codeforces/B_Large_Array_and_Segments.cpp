#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef vector<ll> vll;

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;
    vll a(n);
    for (ll &ai : a) cin >> ai;
    
    ll total_sum = accumulate(a.begin(), a.end(), 0LL);
    vll prefix(2 * n + 1, 0);
    
    for (ll i = 1; i <= 2 * n; i++) {
        prefix[i] = prefix[i - 1] + a[(i - 1) % n];
    }
    
    ll count = 0;
    deque<ll> dq;
    
    for (ll l = 1; l <= n * k; l++) {
        while (!dq.empty() && prefix[l] - prefix[dq.front()] >= x) {
            dq.pop_front();
        }
        count += dq.size();
        while (!dq.empty() && prefix[dq.back()] >= prefix[l]) {
            dq.pop_back();
        }
        dq.push_back(l);
    }
    
    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
