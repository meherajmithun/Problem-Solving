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
    int n ; cin >> n;
    vi v(n+1);
    vi v2(n+1);
    double sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> v[i] >> v2[i];
        double x = (v[i-1] - v[i]);
        x *= x;
        double y = (v2[i-1] - v2[i]);
        y *= y;
        double ans = sqrt(x+y);
        sum += ans;
    }
    double m = v[n]*v[n];
    double d = v2[n]*v2[n];
    double ans = sqrt(m+d);
    sum += ans;
    cout<<fixed<<setprecision(20)<<sum<<endl;
}
