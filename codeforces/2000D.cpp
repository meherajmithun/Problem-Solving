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
    vi v(n);
    for(int i = 0; i< n; i++) cin >> v[i];
    string s; cin >> s;
    int val = 0;
    int l = -1 , r = -1;
    for(int i = 0; i < n; i++){
        if(s[i] == 'L' and l == -1){
            l = i;
        }
        if(s[i] == 'R' and r == -1){
            r = i;
        }
        val += v[i];
        if(l != -1 and r != -1){
            break;
        }
    }
    //cout<<val<<endl;
    //cout<<v[r]<<endl;
    while(r < n){
        if(s[r] != 'R'){
            r++;
        }
        else if(s[l] != 'L'){
            l++;
        }
        if(s[l] == 'L' and s[r] == 'R'){
            int p1 = l , p2 = r;
            while (p1 <= p2){
                val += v[p1];
                p1++;
            }
        }

    }
    cout<<val<<endl;

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
