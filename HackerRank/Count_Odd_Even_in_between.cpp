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
    int a, b ;
    cin >> a >> b;
    int n = min(a,b);
    int m = max(a,b);
    int odd = 0 ,even = 0;
    for(int i = n; i <= m; i++){
        if(i % 2 == 0) even++;
        else odd++;
    }
    cout<<"Even : "<<even<<endl<<"Odd  : "<<odd;
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