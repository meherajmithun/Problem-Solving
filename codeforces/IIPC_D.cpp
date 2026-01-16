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
    int n , k; cin >>n >> k;
    vi v(n);
    vi v2;
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(all(v));
    for(auto u : v) cout<<u<<" ";
    cout<<endl;
    int l = 0 , r = n-2;
    while(l < r ){
        v2.pb(v[l] + v[r]);
        l++;
        r--;
    }

    v2.pb(v[l]);
    v2.pb(v[n-1]);
    for(auto u : v2) cout<<u<<" ";
    cout<<endl;
    cout<<*max_element(all(v2))<<endl;
}
