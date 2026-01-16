#include<bits/stdc++.h>
using namespace std;
#define ll long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve() {
    int n, m; 
    cin >> n >> m;
    vector<ll>v(n),v2(m);
    for(auto &u : v) cin >> u;
    for(auto &u : v2) cin >> u;
    sort(v2.begin(), v2.end());

    for (int i = 0; i < n; i++) {
        bool paisi = false;

        for (int j = 0; j < m; j++) {
            ll tmp = v2[j] - v[i];

            if (i == 0 || tmp >= v[i - 1]) {
                v[i] = tmp;
                paisi = true;
                break;
            }
        }
        
        if (!paisi) {
            cout << "NO" << endl;
            return;
        }
    }
    
    cout << "YES" << endl;
}

int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}
