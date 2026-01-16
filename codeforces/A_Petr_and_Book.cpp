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
    int i,cnt = 0 , sum = 0;
    vi v(7);
    for(auto &u : v) cin >> u;
    for(int i = 0; i < 1000; i++){
        cnt = 0;
        for(int j = 0; j < 7; j++){
            sum += v[j];
            if(sum >= n){
                cout<<cnt+1<<endl;
                return;
            }
            else cnt++;
        }
    }
}

int32_t main() {
    slow;
    int tc = 1;
   // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}