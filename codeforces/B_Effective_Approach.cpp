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
    int n; cin >> n;
    vi v(n);
    for(auto &u : v) cin >> u;
    int b = 0 , p = 0;
    int query ; cin >> query;
    while(query--){
    bool vasya = true;
    bool petya = true;
        int a ; cin >> a;
        int k = 0;
        for(int i = 0, j = n-1; i < n; i++,j--){
            k++;
            if(v[i] == a and vasya == true){
                b += i+1;
                vasya = false;
                //break;
            }
            if(v[j] == a and petya == true){
                p += k;
                petya = false;
            }
            if(!vasya and !petya) break;
        }
    }
    cout<<b<<" "<<p<<endl;
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