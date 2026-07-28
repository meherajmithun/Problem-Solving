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
    int n,m,a,b;
    cin >> n >> m >> a >> b ;
    if(n <= m){
        int k = m/n;
        if(a*n > b*1) cout<<1*b<<endl;
        else cout<<a*n<<endl;
        return ;
    }
    int fast = a*n;
    int sec = n / m;
    sec *= b;
    if(n % m != 0){
        int k = n % m;
        k *= a;
        sec += k;
    }
    //sec *= a;
    if(fast > sec){
        int s = n / m;
        if(n % m != 0) s++;
        s *= b;
        if(sec > s) cout<<s<<endl;
        else cout<<sec<<endl;
    }
    else cout<<fast<<endl;
}

int32_t main() {
    slow;
    int tc = 1;
 // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}