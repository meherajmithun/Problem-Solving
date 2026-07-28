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
   int n,k;
   cin >> n >> k;
   vl v(n+1);
   for(int i = 0; i < n; i++) cin >> v[i];

   int cnt = 0;
   int remove = 0;

   sort(all(v));

   for(int i = 1; i < n+1; i++){
    if(abs(v[i] - v[i-1]) <= k){
        cnt += i+1;
    }
    else {
        remove += cnt;
        cnt = 0;
    }
    cout<<abs(v[i]-v[i-1])<<" ";
   }
  // cout<<remove<<endl;

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