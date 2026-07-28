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

void solve() {
    int x , y ; cin >> x >>  y;
    if(y > 2){
        if(y % 2 == 0){
            int val = (x+(y*4));
            int ans = val/15;
            if(val % 15 != 0) ans++;
            cout<<ans<<endl;
            return;
        }
        int cai = x + (y*4);
        int ans = cai/8;
        if(cai % 8 != 0) ans++;
        cout<<ans<<endl;
        return;
    }
    int ans = (x+(y*4))/15;
    if((x+(y*4)) % 15 != 0) ans++;
    cout<<ans<<endl;
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