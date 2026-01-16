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
    int n , a , b;
    cin >> n >> a >> b;
    int area = 6*n;
    int s = a*b;
    area = max(area,s);
    int x = sqrt(area);
    for(int i = x; i > 0; i--){
        if(area % i == 0){
            cout<<area<<endl<<max(i,area/i)<<" "<<min(i,area/i)<<endl;
            return ;
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