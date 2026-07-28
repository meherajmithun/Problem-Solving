// IN THE NAME OF ALLAH
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;

int digit(int n){
    int ans = 0;
    while(n>0){
        ans += (n%10);
        n /= 10;
    }
    return ans;
}


void solve(){
    int n; cin>>n;
    int cnt = 0;
    // cout<<n/10<<nl;
    for(int i=n; i<=n+200; i++){
        int d = digit(i);
        if(i-d==n) cnt++;
    }
    cout<<cnt<<nl;
}

int32_t main(){
    fast
    int tc=1;
    cin >> tc;
    int C = 1;
    while(tc--){
        // cout << "Case " << C++ << ": ";
        solve();
    }
}