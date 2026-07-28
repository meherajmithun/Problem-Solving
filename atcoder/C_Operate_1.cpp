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
    int k ; cin >> k;
    string s , t;
    cin >> s >> t;
    int dif = 0;
    int n = s.size();
    int m = t.size();
    if(n == m){
    for (int i = 0; i < n; ++i) {
        if (s[i] != t[i]) {
                ++dif;
                if (dif > 1){
                    cout<<"No"<<endl;
                    return;
                }
        }
    }
    cout<<"Yes";return;
    }
    if (abs(n-m) == 1) {
        int i = 0, j = 0, diffCount = 0;
        while (i < n && j < m) {
            if (s[i] != t[j]) {
                ++diffCount;
                if (diffCount > 1) {
                    cout<<"No";
                    return;
                }
                if (n > m) ++i;
                else ++j;          
            } else {
                ++i; ++j;
            }
        }
        cout<<"Yes";
        return;
    }
cout<<"No";
return;
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