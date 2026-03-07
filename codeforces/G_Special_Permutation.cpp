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
    if(n<=3){
        cout<<"-1\n"; return;
    }
    deque<int>ans = {3,1,4,2};
    for(int i=5; i<=n; i+=2){
        ans.push_back(i);
    }
    // for(auto a : ans) cout<<a<<" "; cout<<nl;
    for(int i=6; i<=n; i+=2){
        ans.push_front(i);
    }
    for(auto a : ans) cout<<a<<" "; cout<<nl;
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