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


void solve() {
    int n ; cin >> n;
    vi v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    int ans1 = 0;
    int mx = 0;
    int cnt1 = 0;
    for(int i = 0; i < n; i += 2){
        mx = max(mx,v[i]);
        cnt1++;
    }
    ans1 = cnt1+mx;
    mx = 0;
    cnt1 = 0;
    int ans2 = 0;
    for(int i = 1; i < n; i += 2){
        mx = max(mx,v[i]);
        cnt1++;
    }
    ans2 = cnt1+mx;

    cout<<max(ans1,ans2)<<endl;
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
