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
    string s , t ; cin >> s >> t;
    sort(all(s));
    sort(all(t));
    int n1 = unique(all(s))-s.begin();
    int n2 = unique(all(t))-t.begin();
    int n = max(n1,n2);
    int non = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != t[i]){
            non++;
            if(non > k){
                cout<<"No";
                return;
            }
        }
    }
    cout<<"Yes";
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