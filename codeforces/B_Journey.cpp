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
    int n , a , b , c;
    cin >> n >> a >> b >> c;
    int sum = 0 , cnt = 0;
    while(true){
        sum += a;
        cnt++;
        if(sum >= n ){
            cout<<cnt<<endl;
            return;
        }
        sum += b;
        cnt++;
        if(sum >= n ){
            cout<<cnt<<endl;
            return;
        }
        sum += c;
        cnt++;
        if(sum >= n ){
            cout<<cnt<<endl;
            return;
        }
    }   
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