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
    vi v(n),v2(n);
    for(int i = 0; i < n; i++){
        cin >> v[i] >> v2[i];
    }   
    int sum = v2[0] , ans = 0;

    for(int i = 1; i < n; i++){
        int x = v[i]-v[i-1];
        if(x < 0){
            x = 0;
        }
        //ans += x;
        sum -= x;
        if(sum < 0){
            sum = 0;
        }
        sum += v2[i];
    }
    cout<<sum<<endl;
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