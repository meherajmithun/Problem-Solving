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
    int n ; cin >> n;
    vi v(n);
    for(auto &u : v) cin >> u;
    int cnt0 = 0;
    //sort(all(v));
    bool visit = true;
    int x = v[0];
    for(int i = 1; i < n; i++){
       // visit = true;
        if(abs(v[i] - x) != 1 ){
            if(abs(v[1]-x) == 0){
                cout<<n-1<<endl;
                return;
            }
            if(abs(v[i] - x) == 0){
                visit = false;
            }
            cnt0++;
        }
    }
    if(!visit){
        cnt0--;
    }
    cout<<cnt0<<endl;
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