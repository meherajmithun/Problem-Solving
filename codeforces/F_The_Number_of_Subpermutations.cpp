// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void brute(){
    int n; cin>>n;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    int ans = 0;
    for(int i=1; i<=n; i++){
        vector<int>cnt(n+1, 0);
        // cnt[v[i]]++;
        int x = 0;
        for(int j=i; j<=n; j++){
            cnt[v[j]]++;
            int len = j-i+1;
            if(cnt[v[j]]>1) continue;
            x++;
            if(x==len) ans++;
        }
    }
    cout<<ans<<nl;
}

void solve() {
    brute();
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