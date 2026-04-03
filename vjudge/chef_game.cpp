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
    set<pair<int,int>>st;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        st.insert({a, i+1});
    }
    for(auto [a,b] : st) cout<<a<<" "<<b<<nl; cout<<nl<<nl;
    while(sz(st)!=0){
        auto a = *(st.rbegin()); st.erase(a);
        int match = a.second, player = a.first;
        cout<<match<<" "<<player<<nl;

    }
}

int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}