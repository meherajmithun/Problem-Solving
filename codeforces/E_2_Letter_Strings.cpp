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
#define all(a) (a).begin(),(a).end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
void solve() {
   ll n ; cin >> n;
   vector<string> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   ll cnt = 0;
   for(int i = 0; i < n; i++){
       string s = v[i];
       for(int j = i+1; j < n; j++){
           string s2 = v[j];
           if((s[0] == s2[0] and s[1] != s2[1]) || (s[1] == s2[1] and s[0] != s2[0])){
               cnt++;
           }
       }
  
       }
   
   cout<<cnt<<endl;
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