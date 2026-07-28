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
   int n ; cin >> n;
   vl v(n);

   for(int i = 0; i < n; i++) cin >> v[i];

   if(n <= 3){
    cout<<0<<endl;
   }
   else {
    sort(v.begin() , v.end());
    int ans1 = v[n-1] - v[2];
    int ans2 = v[n-2] - v[0];
    int ans3 = v[n-3] - v[0];
   
   cout<<min(ans1,min(ans2,ans3))<<endl;
   }
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