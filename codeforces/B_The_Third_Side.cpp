#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }
    while (pq.size() > 1) {
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();
        int k = a + b;
        pq.push(k - 1); 
    }

    cout << pq.top() << '\n'; 
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
