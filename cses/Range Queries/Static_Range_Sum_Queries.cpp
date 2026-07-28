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
    int query ; cin >> query;
    vl v(n+1, 0);
    for(int i = 1; i <= n; i++){
        int val;
        cin >> val;
        v[i] = v[i-1] + val;
    }
 
    while(query--){
        int a, b ;
        cin >> a >> b;
        cout << v[b] - v[a-1] << endl;
    }
}