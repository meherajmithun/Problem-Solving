// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        // v[i] = abs(v[i]);
    }
    // for(auto a : v) cout<<a<<" "; cout<<nl;
    for(int i=0; i<n; i++){
        int a = 0,b=0;
        for(int j=i+1; j<n; j++){
            if(v[j]>v[i]) a++;
            else if(v[j]<v[i]) b++;
        }
        cout<<max(a,b)<<" ";
    }
    cout<<nl;
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