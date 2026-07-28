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
    string s ; cin >> s;
    int operation = n-1;
    int l = 0 , r = n-1;
    while(l < n){
        if(s[l] == 'B') operation--;
        else break;
        l++;
    }
    while(r > 0){
        if(s[r] == 'A') operation--;
        else break;
        r--;
    }
    //cout<<operation<<endl;

    if(operation > 0) cout<<operation<<endl;
    else cout<<0<<endl;

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
