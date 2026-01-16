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
    int n , m ;
    cin >> n >> m;
    vi v(n);
    for(auto &u : v) cin >> u;
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    vi v2(n);
    fact = fact % mod;
    for(int i = 0; i < n; i++){
        v2[i] = v[i]*fact;
    }
    //for(auto u : v2) cout<<u<<" ";
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        int x = v2[i];
        for(int j = 1; j*j <= x; j++){
            if(x%j == 0){
                cnt++;
            }
            if(x / j != j){
                cnt++;
            }
        }
        cout<<cnt<<" ";
    }
    cout<<endl;   
}

int32_t main() {
    slow;
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}