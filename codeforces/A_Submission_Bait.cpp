//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
#define solo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) (v).begin(), (v).end()
#define pb push_back
const int MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int n ; cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int a ; cin >> a;
        if(a % 2 == 1) cnt++;
    }
    if(cnt % 2 == 0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int32_t main() {
    solo;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}