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
    int n,x,k; cin>>n>>x>>k;
    // cout<<n<<" "<<x<<" "<<k<<nl;
    long long N, M;
    cin >> N >> M;

    if (M == 1 || M % 3 != 2) {
        cout << -1 << '\n';
        return ;
    }

    vector<long long> pat = {1, 1, 0, M - 1, M - 1, 0};

    for (int i = 0; i < N; i++) {
        cout << pat[i % 6] << " ";
    }
    cout << '\n';
}
int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    int w = 1;
    while (tc--) {
        //cout << "Case " << w++ << ": ";
        solve();
    }
    return 0;
}