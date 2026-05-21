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
    int n,m,k; cin>>n>>m>>k;
    vector<int>v(n),cs;
    int tot=0;
    for(auto &a : v){
        cin>>a;
        tot += (a/k);
        if(a%k!=0){
            cs.push_back(a%k);
        }
    }
    sort(rall(cs));
    // for(auto a : cs) cout<<a<<" "; cout<<nl;

    int s = m+1;
    int t = min(tot, (s/(k+1)));
    int ans = t*k;
    s -= (t*(k+1));

    if(tot>t and s>1){
        ans += min(k,s-1);
        s -= (min(k,s-1)+1);
    }
    // cout<<s<<" "<<ans<<" "<<tot<<nl;
    for(auto a : cs){
        if(s<=1) break;
        int tmp = min(a, s-1);
        ans += tmp;
        s -= (tmp+1);
        // cout<<s<<" "<<tmp<<nl;
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