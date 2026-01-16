//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define nl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
#define double long double;

void solve() {
    int n , d ; 
    cin >> n >> d;
    vi v(n);
    for(auto &u : v) cin >> u;
    int m ; cin >> m;
    int sum = 0;
    sort(all(v));
    if(m < n){
        for(int i = 0; i < m; i++) sum += v[i];
        cout<<sum<<endl;
        return;
    }  
    //Otherwise he will pay a fine or neutral.
    for(int i = 0; i < n; i++ ) sum += v[i];

    int hook = m-n;
    int fine = hook*d;
    cout<<sum-fine<<endl;
}

int32_t main() {
    slow;
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}