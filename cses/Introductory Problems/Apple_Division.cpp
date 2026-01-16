//  IN THE NAME OF ALLAH
 
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).end(), (x).begin()
#define print(x) cout<<x<<'\n'
using namespace std;
vector<int>v;
 
int call(int i,int n,int s1,int s2){
    if(i == n) return abs(s1-s2);
    int a = call(i+1,n,s1+v[i],s2);
    int b = call(i+1,n,s1,s2+v[i]);
    return min(a,b);
}
 
void solve() {
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        v.push_back(a);
    }
    int s1=0,s2=0;
    int ans = call(0,n,s1,s2);
    print(ans);
}
 
int32_t main() {
    fast
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}