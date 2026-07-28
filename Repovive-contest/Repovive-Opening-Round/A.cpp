// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n; cin>>n;
    vector<int>v(n),preMin(n),sufMax(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(i==0){
            preMin[i] = v[i];
        }
        else{
            preMin[i] = min(preMin[i-1], v[i]);
        }
    }
    for(int i=n-1; i>=0; i--){
        if(i==n-1){
            sufMax[i] = v[i];
        }
        else sufMax[i] = max(sufMax[i+1], v[i]);
    }
    // for(auto a : sufMax) cout<<a<<" "; cout<<nl;
    // for(auto a : preMin) cout<<a<<" "; cout<<nl;

    int ans = 0;
    for(int i=0; i<n; i++){
        int a = sufMax[i];
        int b = preMin[i];
        if(a==v[i] or b == v[i]) ans++;
    }
    cout<<ans<<nl;


}
int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    int w = 1;
    while (tc--) {
        //cout << "Case " << w++ << ": ";
        solve();
    }
    return 0;
}