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
const int mx = 1000000;
int divisor[mx];

void solve() {
    int n; cin>>n;
    int ans = 0;

    for(int i=1; i<=sqrt(n); i++){
        if(n%i == 0){
            ans += i;
            if(i == 1) continue;
            else if(n/i != i){
                ans += (n/i);
            }
        }
       // cout<<ans<<" ";
    }
    print(ans);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    // for(int i=1; i<n; i++){
    //     for(int j=i; j<n; j+=i){
    //         divisor[i] += j;
    //     }
    // }

    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}