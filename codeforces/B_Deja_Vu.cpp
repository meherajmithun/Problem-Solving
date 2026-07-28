/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"

void solve() {
   int n; cin >> n;
   int q; cin >> q;
   vector<int> v(n);
   vector<int> v2;
   vector<int>v3;
   int query;

   for (int i = 0; i < n; i++) cin >> v[i];
   for (int i = 0; i < q; i++) {
    cin >> query;
    if(v2.empty() || v2.back() > query){
      v2.pb(query);
    }
   }

   for(int i = 0; i < n; i++){
    for(auto it : v2){
      if(v[i] % (1 << it) == 0){
        it -= 1;
        v[i] +=(1 << it);
      }
    }
   }
   for(auto u : v) cout<<u<<" ";

   cout << endl;
}

int main() {
    fastIO;
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
