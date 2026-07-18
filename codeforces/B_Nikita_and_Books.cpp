// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    int nisi = 0;
    for(int i=0; i<n; i++){
        // if(v[i]<)
        v[i] += nisi;
        int lagbe = i+1;
        if(v[i]<lagbe){
            cout<<"NO\n"; return;
        }
        nisi = v[i]-lagbe;
    }
    // if(is_sorted(all(v))) cout<<"YES\n";
    cout<<"YES\n";
}

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}