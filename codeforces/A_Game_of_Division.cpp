
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
#define double long double;

void solve() {
    int n , k ; cin >> n  >> k;
    vi v(n);
    for(auto &u : v) cin >> u;
    for(int i = 0; i < n; i++){
        bool paisi = true;
        for(int j = 0; j < n; j++){
            if(i != j){
                int x = abs(v[i]-v[j]);
                if(x % k == 0){
                   paisi = false;
                   break;
                }
            }
        }
        if(paisi){
            yes;
            cout<<i+1<<endl;
            return;
        }
    }
    no; 
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