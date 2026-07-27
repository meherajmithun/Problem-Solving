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
    int sum=0;
    vector<int>v(n);
    for(auto &a : v) cin>>a,sum+=a;
    sort(all(v));
    int avg = (sum/n); if(sum%n) avg++;
    int ans = n;
    for(auto a : v){
        if(avg>a){
            sum -= a; ans--;
            avg = sum/ans;
            if(sum%ans) avg++;
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