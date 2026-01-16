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
    vi v(n);
    for(auto &u : v) cin >> u;
    sort(all(v));
    if(n < 3){
        cout<<0<<endl;
        return ;
    }
    int l = 0 , r = n-1;
    int sum1 = 0;
    int ans = 0;
    int sum2 = v[r];
    while(l <= r){ 
        sum1 += v[l];
        if(sum1 < sum2){
            sum1 -= v[l];
            l++;
        }
        else{
            r--;
            ans++;
            sum2 = v[r];
        }
    }
    cout<<ans<<endl;
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