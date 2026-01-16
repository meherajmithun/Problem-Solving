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
    int n , x ; cin >> n >> x;
    vi v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int cnt = 0;
    sort(v.rbegin() , v.rend());
    int a = v[0];
    int y = v[x-1];
    while(1){
        if(v[0] != a){
            sort(v.rbegin() , v.rend());
            a = v[0];
        }

        if(v[x-1] == 0) break;
        for(int i = 0; i < x; i++){
            v[i]--;
        }
        cnt++;
    }
    cout<<cnt<<endl;
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
