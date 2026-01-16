#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    for(int i=0; i<n; i++){
        int cnt = 0;
        for(int j=i; j<n; j++){
            if(v[i] == v[j]) cnt++;
            else break;
        }
        if(cnt >= 3){
            cout<<"Yes"<<'\n';
            return;
        }
    }
    cout<<"No"<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
}
