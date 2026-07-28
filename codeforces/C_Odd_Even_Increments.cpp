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
   int n ; cin >> n;
   vi v(n);
   vi v1(n);
   vi v2(n);

    int cnt_o = 0 , cnt_e = 0;
   for(int i = 0;i < n; i++){
    cin >> v[i];
    v1[i] = v[i];
    v2[i] = v[i];
    if(v[i] % 2 == 0){
        cnt_e++;
    }
    else{
        cnt_o++;
    }
   }
   if(cnt_o == n || cnt_e == n){
    yes;
    return ;
   }
   for(int i = 0; i < n; i++){
    if(i % 2  != 0){
        v[i]++;
    }
   }
   int cnt = 0;
   for(int i = 0; i < n; i++){
    if(v[i] % 2 != 0){
        cnt++;
    }
   }
   if(cnt == n){
    yes;
    return ;
   }
   for(int i = 0; i < n; i++){
    if(i % 2 != 0){
        v1[i]++;
    }
   }
   cnt = 0;
   for(int i = 0; i < n; i++){
    if(v1[i] % 2 == 0){
        cnt++;
    }
   }
   if(cnt == n){
    yes;
    return ;
   }
   //cout<<cnt<<endl;
   no;
   //for(auto u : v) cout<<u<<" ";
   //cout<<endl;
   //for(auto u : v1) cout<<u<<" ";
   //cout<<endl;
   //for(auto u : v2) cout<<u<<" ";
   //cout<<endl;
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