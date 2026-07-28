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
   // int x = INT_MAX,ans = 0, y = INT_MAX;
    int x=1e9, y=1e9, ans=0;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        if(x>y)
        {
            swap(x,y);
        }
        if(v[i] <= x)
        {
            x=v[i];
        }
        else if(v[i]<=y)
        {
            y=v[i];
        }
        else
        {
            x=v[i];
            ans++;
        }
    }
    cout << ans << endl;
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
