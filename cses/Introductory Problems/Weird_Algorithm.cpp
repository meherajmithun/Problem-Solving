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
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    cout<<n<<" ";
    while(true){
        if(n == 1){
           // cout<<1<<endl;
            break;
        }
        if(n % 2 == 0){
            n = n / 2;
            cout<<n<<" ";
        }
        else{
            n = (n*3)+1;
            cout<<n<<" ";
        }
    }
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