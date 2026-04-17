// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int N = 19;
#define mod 1000003
vector<int>fact(N,1);

void factorial(){
    for(int i=2; i<=18; i++){
        fact[i] = (fact[i-1]*i);
    }
    // for(int i=1; i<10; i++) cout<<fact[i]<<" "; cout<<nl;
}

int ncr(int n, int r){
    if(r>n or r<0) return 0;
    int ans = 1;
    r = min(n,n-r);
    for(int i=1; i<=r; i++){
        ans =ans*(n-r+i)/i;
    }
    return ans;
}

void solve() {
    int n,k; cin>>n>>k;
    if(n<k){
        cout<<"0\n"; return;
    }   
    int x = ncr(n,k);
    int ans = x*x*fact[k];
    cout<<ans<<nl;
}

int32_t main() {
    fast
    factorial();
    int tc = 1;
    cin >> tc;
    int w = 1;
    while (tc--) {
        cout<<"Case "<<w++<<": ";
        solve();
    }
    return 0;
}