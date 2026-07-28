//  IN THE NAME OF ALLAH
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
 
int32_t main() {
    slow;
    int n ; cin >> n;
    vi v(n);
    for(auto &u : v) cin >> u;
    sort(all(v));
    int need = 0;
    int x = n / 2;
    if(n % 2 == 0) x--;
    //cout<<v[x]<<endl;
    for(int i = 0; i < n; i++){
        int y = abs(v[x] - v[i]);
        need += y;
        //cout<<need<<endl;
    }
    cout<<need<<endl;
}