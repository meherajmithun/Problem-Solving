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
   vl v1(n);
   vl v2(n);
   for(int i = 0; i < n; i++){
    cin >> v1[i] >> v2[i];
   }

   ll ans = 0;
   for(int i = 0, j = n-1; i < n; i++,j--){
    if(i != j){
        ans += max(v2[i] , abs(v1[i] - v1[j]));
    }
    cout<<ans<<endl;
   }
  cout<<ans<<endl;

}

