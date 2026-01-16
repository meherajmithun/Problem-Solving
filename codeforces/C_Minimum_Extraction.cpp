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
#define control ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long

void solve() {
   int n  ; cin >> n;
   vl v(n);
   for(int i = 0; i < n; i++) cin >> v[i];

   if(n == 1){
    cout<<v[0]<<endl;
    return ;
   }

    int x = INT_MIN;
   while( v.size() > 2){
    
    sort(all(v));
    x = v[0];

    v.erase(v.begin());

    for(int i = 0; i < v.size(); i++){
        v[i] -= x;
    }

   }

    int y = v[0];
    (x > y) ? cout<<x : cout<<y;

    //for(auto u : v) cout<<u<<" ";
    cout<<endl;
}

int32_t main() {
    control;
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}