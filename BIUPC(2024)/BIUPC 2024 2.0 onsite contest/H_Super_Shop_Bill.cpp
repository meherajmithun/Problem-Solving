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
//#define double long double;

void solve() {
    int n ; cin >> n;
      double sum = 0;
    while(n--){
        char a ; cin >> a;
        if(a == 'A'){
            double p,q;
            cin >> p >> q;
            double ans = p*q;
            ans += (0.05*p)*q;
            sum += ans;
        }

        if(a == 'F'){
            double p,q;
            cin >> p >> q;
            double ans = p*q;
            ans += (0.05*p)*q;
            ans += (.1*p)*q;
            sum += ans;
        }

        if(a == 'O'){
            double p,q;
            cin >> p >> q;
            double ans = p*q;
            ans += (0.05*p)*q;
            ans += (.075*q)*p;
            sum += ans;
        }
    }
    cout<<fixed<<setprecision(2)<<sum<<endl;
}

int32_t main() {
    slow;
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
