//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve() {
    int n,k; cin>>n>>k;
    int mx = -1;
    for(int i=1; i*i <= n; i++){
        if(n%i == 0 and i<=k){
            mx = max(mx,i);
            if(n/i != i and (n/i) <= k){
                mx = max(mx,n/i);
            }
        }
    }   
    int ans = n/mx;
    if(n%mx != 0) ans++;
    print(ans);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}