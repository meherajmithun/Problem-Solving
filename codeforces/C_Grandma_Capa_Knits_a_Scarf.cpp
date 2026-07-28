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
#define print(x) cout<<x<<'\n'

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    int ans = INT_MAX;
    for(int i=0; i<26; i++){
        char c = 'a'+i;
        // cout<<c<<nl;
        int l=0,r=n-1,cnt=0;
        while(l<=r){
            if(s[l]==s[r]){
                l++; r--;
            }
            else if(s[l]==c){
                l++; cnt++;
            }
            else if(s[r]==c){
                r--; cnt++;
            }
            else{
                cnt = INT_MAX; break;
            }
        }
        ans = min(ans,cnt);
    }
    if(ans==INT_MAX) ans=-1;
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