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
    int x = (n % 100);
    if(x > 0){
        cout<<(n/100)<<".";
        if(x % 10 == 0){
            cout<<x/10<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
    else{
        cout<<n/100<<endl;
    }
}

int32_t main() {
    slow;
    int tc = 1;
  //  cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}