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
    string s; cin>>s;
    vector<int>t(n),cs,hash(n+1, 0);
    iota(all(t),1);
    // for(auto a : t) cout<<a<<" "; cout<<nl;
    for(int i=0; i<n; i++){
        if(s[i]=='1') {cs.push_back(i+1); hash[i+1]++;}
    }
    int ans = 0;
    // for(int i=1; i<=n; i++) cout<<i<<" -> "<<hash[i]<<nl;
    // for(auto a : cs) cout<<a<<" "; cout<<nl;
    for(auto a : t){
            // ans += a;
            for(int i=a; i<=n; i+=a){
                if(!hash[i]){
                    ans += a; hash[i]++;
                }
                // else if(s[i-1]=='1' and i>a) break;
                if(s[i-1]=='1') break;
            }
    }
    cout<<ans<<nl;
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