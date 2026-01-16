// IN THE NAME OF ALLAH

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

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;

    reverse(all(v)); 
    int k = v[n-1]; v.pop_back();

    v.push_back(k); 

    k = v[n-1]; v.pop_back();

    reverse(all(v)); v.push_back(k);
    
    for(auto a : v) cout<<a<<" "; cout<<nl;
 }

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}