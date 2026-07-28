// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n; cin>>n;
    vector<int>a(n+1),b(n+1);
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++) cin>>b[i];
    int cnt = 0;
    for(int i=1; i<n; i++){
        if(i==1){
            if(gcd(a[i],a[i+1]) < a[1]) cnt++;
        }
        if(i==n-1){
            if(gcd(a[i],a[i+1]) < a[i+1]) cnt++;
        }
        int x = gcd(a[i],a[i-1]);
        int y = gcd(a[i],a[i+1]);
        int l = lcm(x,y);
        if(l<a[i]) cnt++; 
        
    }
    cout<<cnt<<nl;
}

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}