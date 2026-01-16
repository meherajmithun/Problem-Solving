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
    vi v={1,2,3};
    //for(auto u : v) cout<<u<<" ";
    for(int i = 0;i < n;i++) cout<<0<<" ";
    cout<<endl;
    while(next_permutation(all(v))){
        if(v[0]+v[1]+v[2] == n){
            for(auto u : v) cout<<u<<" ";
            cout<<endl;
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