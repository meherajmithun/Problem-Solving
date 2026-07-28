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
    string s; cin>>s;
    int mx = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='#'){
            int cnt = 0;
            while(i<n and s[i]=='#'){
                cnt++; i++;
            }
            mx = max(mx,cnt);
        }
    }
    cout<<(mx+1)/2<<nl;
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