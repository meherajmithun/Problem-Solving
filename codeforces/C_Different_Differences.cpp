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
   int k ; cin >> k;
   int n ; cin >> n;
   int gap = (n-1)/(k-1);
   gap--;
   for(int i = 1; i < k; i++){
    if(i == 1){
      cout<<i<<" ";
    }
    else{
      cout<<(i+gap)<<" ";
    }
   }
   if((n-k) > 2 or gap > 2){
    cout<<n-(n-k)+1<<endl;
    return;
   }
   cout<<n<<endl;
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