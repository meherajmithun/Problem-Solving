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
    string s; cin>>s;
    vector<int>ans;
    int f = 0;
    for(int i=1; i<=n; i++){
        if(!f){
            ans.push_back(i);
        }
        else{
            ans.insert(ans.begin(), i);
        }
        if(s[i-1]=='o') f = !f;
    }
    if(f){
        for(int i=n-1; i>=0; i--) cout<<ans[i]<<" ";
    }
    else{
        for(int i=0; i<n; i++) cout<<ans[i]<<" ";
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