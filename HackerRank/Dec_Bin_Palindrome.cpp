//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define nl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
#define double long double
#define mod 1000000007

void solve() {
    int n ; cin >> n;
    vi v;
    vi v2;
    while(n > 0){
        if(n % 2 == 0){
            v.pb(0);
            v2.pb(0);
        }
        else{
            v.pb(1);
            v2.pb(1);
        }
        n /= 2;
    }   
    reverse(all(v2));
    if(v == v2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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