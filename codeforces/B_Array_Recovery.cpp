#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &u : v) cin >> u;

    vector<int> now(n);
    now[0] = v[0];
    int sum = v[0];

    bool f = true;
    for (int i = 1; i < n; i++) {
        now[i] = sum + v[i];
        sum += v[i];
    }

    for(int i=1; i<n; i++){
        if(v[i] != 0 and now[i-1] - v[i] >= 0){
            cout<<-1<<'\n';
            return;
        }
    }

    for (auto u : now) cout << u << " ";
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}
