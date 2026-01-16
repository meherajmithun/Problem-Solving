#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> v(n),v2(n);
    for(auto &u : v) cin >> u;
    for(auto &u : v2) cin >> u;
    
    set<int> st;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            st.insert(v[i] + v2[j]);
            if (st.size() >= 3) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}
