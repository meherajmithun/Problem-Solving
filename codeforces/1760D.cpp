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
    int n ; cin >> n ;
    vi v;
    for(int i = 0;  i < n; i++){
        int a ; cin >> a;
        if(i == 0 or a != v.back()){
            v.pb(a);
        }
    }
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
        if(( i == 0 or v[i-1] > v[i]) and (i == v.size() - 1 or v[i] < v[i+1])){
            ans++;
        }
    }
    if(ans == 1) yes;
    else no;
}

int32_t main() {
    control;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
