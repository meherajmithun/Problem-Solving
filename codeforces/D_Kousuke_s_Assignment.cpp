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
        int n ; cin >> n;
        vi a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        map<int , int> prefix_map;
        long long sum = 0;
        int beautiful = 0;
        prefix_map[0] = -1;

        for (int i = 0; i < n; ++i) {
            sum += a[i];

            if (prefix_map.count(sum)) {
                beautiful++;
               
                prefix_map.clear();
                prefix_map[0] = i; 
                sum = 0;
            } else {
                prefix_map[sum] = i;
            }
        }

        cout << beautiful << endl;
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