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

   if(n < 7 || n == 9){
    cout<<"NO"<<endl;
    return ;
   }
   cout<<"YES"<<endl;
   int ans = n - 3;
   if(ans % 3 == 0){
    cout<<1<<" "<< 4 <<" "<<n-5<<endl;
   }
   else {
    cout<<1<<" "<<2<<" "<<n-3<<endl;
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