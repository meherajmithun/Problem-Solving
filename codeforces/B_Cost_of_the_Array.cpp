#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int &x : a) cin >> x;

    sort(a.begin(), a.end());  // Sort the array first

    vector<int> b;
    for (int i = n - k / 2; i < n; i++) {  
        b.push_back(a[i]);  // Take the last k/2 elements (optimal choice)
    }
    
    sort(b.begin(), b.end());  // Sorting b ensures correct cost calculation
    b.push_back(0);  // Append 0 to b

    int cost = 1;  // Start checking from index 1
    for (int i = 0; i < b.size(); i++) {
        if (b[i] != cost) break;
        cost++;
    }

    cout << cost << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
