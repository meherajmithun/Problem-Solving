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
    set<int>st;
    for(int i=1; i<=n; i++) st.insert(i);
    vector<int>v(n+123);
    for(auto &a : v){
        cin>>a;
        if(a!=-1)st.erase(a);
    }
    vector<int>cs;
    for(auto a : st) cs.push_back(a);
    reverse(all(cs));
    for(auto a : cs) cout<<a<<" "; cout<<nl;
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