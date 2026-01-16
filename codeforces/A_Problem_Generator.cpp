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
    ll n,m;
    cin >> n >> m;
    vector<char>v(n);
    map<char,ll>mp;
    for(ll i = 0 ; i < n ; i++){
        cin >> v[i];
        mp[v[i]]++;   
    }
    ll ans  = 0;
    while(m--){
        for(char i = 'A'; i <= 'G' ; i++){
            if(mp[i]==0){
                ans++;
            }else{
                mp[i]--;
            }
        }
    }
    cout << ans << endl;
   
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