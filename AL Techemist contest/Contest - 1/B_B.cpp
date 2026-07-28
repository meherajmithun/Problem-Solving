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
    int n ; cin >> n;
    vi v;
    while(n > 0){
        v.pb(n%2);
        n = n/2;
    }
    //reverse(all(v));
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == 0) ans++;
        else{
            cout<<ans<<endl;
            return ;
        }
    }
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