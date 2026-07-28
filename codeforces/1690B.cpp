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
    int n , k ; cin >> n >> k;
    string s; cin >> s;
    int operation = 0;
    for(int i = 0; i < k; i++){
        if(s[i] == 'W') operation++;
    }
    int x = operation;
    for(int i = 0 , j = k; j < n; j++, i++){
        if(s[j] == 'W') x++;
        if(s[i] == 'W') x--;
        if(x < operation) operation = x;
    }
    cout<<operation<<endl;
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
