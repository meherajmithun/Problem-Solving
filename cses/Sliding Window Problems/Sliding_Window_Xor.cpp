//  IN THE NAME OF ALLAH
 
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007
 
void solve() {
    int n,k; cin>>n>>k;
    int x,a,b,c; 
    cin>>x>>a>>b>>c;
    vector<int>v(n);
    v[0] = x;
    for(int i=1; i<n; i++){
        v[i] = ((v[i-1]*a) + b)%c;
    }
    int val = 0;
    for(int i=0; i<k; i++) val ^= v[i];
    vector<int>Xor;
    int l=0,r=k-1;
    while(r<n){
        Xor.push_back(val);
        r++;
        val = val^v[r];
        val = val^v[l];
        l++;
    }
    int ans = 0;
    for(auto u : Xor){
        ans = ans^u;
    }
    print(ans);
 
 
}
 
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
