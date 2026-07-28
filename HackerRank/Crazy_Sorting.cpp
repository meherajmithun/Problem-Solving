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
    int n; cin >> n;
    vector<long long > even;
    vector<long long > odd;
    
    for(int i = 0; i < n; i++){
        int x ; cin >> x;
        if(x % 2 == 0){
            even.push_back( x );
        }
        else {
            odd.push_back( x );
        }
    }
    sort(odd.rbegin() , odd.rend());
    sort(even.begin() , even.end());
    
    for(auto u : odd) cout<<u<<" ";
    for(auto u : even) cout<<u<<" ";
    cout<<endl;
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