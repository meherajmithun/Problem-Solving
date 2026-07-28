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

int32_t main() {
    control;
    int n ; cin >> n;
    int k ; cin >> k;
    int cnt = 0;
    vi v;
    for(int i = 0; i < n; i++){
        int a ; cin >> a;

        v.pb( a );
    }
   // sort(v.begin() , v.end());

   // int x = unique(v.begin() , v.end()) - v.begin();
   
   int jamela = v[k-1];

   for(int i = 0; i < n; i++){
    if(v[i] >= jamela and v[i] > 0) {
        cnt++;
    }
   }
    cout<< cnt<<endl;
}