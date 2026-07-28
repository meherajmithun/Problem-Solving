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
    int n ; cin >> n;
    vi v(4);
    v[0] = abs(n-6);
    v[1] = abs(n-66);
    v[2] = abs(n-69);
    v[3] = abs(n-99);
    int x = 0;
    for(int i = 1; i < 4; i++){
        if(v[i-1] <= v[i]){
            x = max(i-1,x);
        }
    }
    if(x == 0){
        cout<<6<<endl;
    }
    else if(x == 1){
        cout<<66<<endl;
    }
    else if(x == 2){
        cout<<69<<endl;
    }
    else{
        cout<<99<<endl;
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