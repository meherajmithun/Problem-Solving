//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define ll long long
const ll N = (ll) 1e7+123;
const ll mod = (ll) 1e9+7;
const ll inf = (ll) 1e18;
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};
int cnt[N];

void solve() {
    int n ; cin >> n;
    int dorkar,sum = 0;
    for(int i = 1; i <= n; i++){
        dorkar = 0;
        for(int j = i; j <= n; j += i){
            cnt[j]++;
        }
    }
    for(int i = 1; i <= n; i++){
        sum += (i*cnt[i]);
    }
    cout<<sum<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}