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

int main() {
   int n ; cin >> n;
   int m ; cin >> m;
   vl v1(n);
   vl v2(m);
   for(int i = 0; i < n; i++) cin >> v1[i];
   for(int j = 0; j < m; j++) cin >> v2[j];

   ll ans = 0;
   for(int i = 0; i < n; i++){
    ans = gcd(ans , abs(v1[i] - v1[0]));
   }
   for(int j = 0; j < m; j++){
    cout<<gcd(v1[0] + v2[j] , ans)<<" ";
   }
}
