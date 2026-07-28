// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long

void solve() {
    int n;
    cin >> n;
    vi v(n);
    for (auto &u : v) cin >> u;
    map<int,int>mp;
    int ans = 0;
    for(int i = 0; i < n; i++){
        mp[v[i]]++;
        ans = max(ans,mp[v[i]]);
    }
    cout<<n-ans<<endl;
}

int32_t main() {
    slow;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
