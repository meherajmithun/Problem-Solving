//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
#define double long double;

void solve() {
    ll n ; cin >> n;
    n %= 1000000000000;
    ll cnt = 0;
    ll ans = 0;
    for(ll i = 1; i <= n; i++){
        cnt = 0;
        for(ll j = 1; (j*j) <= i; j++){
            if(i % j == 0){
                if(i/j == j){
                    cnt++;
                }
                else{
                    cnt += 2;
                }
            }
        }
        if(cnt == 9) ans++;
    }
    cout<<ans<<endl;
}

int32_t main() {
    slow;
    int tc = 1;
 //   cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}