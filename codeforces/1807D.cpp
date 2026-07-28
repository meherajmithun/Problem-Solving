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
    int n , query; cin >> n >> query;
    vi v;
    vi pre(n+1);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        int a ; cin >> a;
        v.pb(a);
        pre[i] = pre[i-1] + a;
        sum += a;
    }
   // cout<<sum<<endl;
    while(query--){
        int l , r , k;
        cin >> l >> r >> k;
        int psum = pre[r] - pre[l-1];
        int ksum = (sum-psum);
        ksum +=(r-l+1)*k;
        //cout<<ksum<<endl;
        if(ksum % 2 != 0) yes;
        else no;

    }
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
