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
    string a , b ;
    cin >> a >> b;
    //cout<<a+b<<endl;
    int n = stoi(a);
    int m = stoi(b);
    int x = max(a.size() , b.size());
    int ans = 0;
    for(int i = x-1; i >= 0; i--){
        ans += a[i]-48;
        ans += b[i]-48;
    }
    cout<<ans*10<<endl;
}

int32_t main() {
    slow;
    int tc = 1;
 ///   cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}