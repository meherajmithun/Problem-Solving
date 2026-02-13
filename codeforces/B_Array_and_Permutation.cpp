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

void solve(){
    int n; cin>>n;
    vector<int>p(n),a(n);
    for(auto &a : p) cin>>a;
    for(auto &a : a) cin>>a;
    map<int,int>mp;
    for(int i=0; i<n; i++) mp[p[i]] = i;

    // for(auto [a,b] : mp) cout<<b<<" "; cout<<nl;

    vector<int>cs;
    // sort(all(a));
    cs.push_back(a[0]);
    for(int i=1; i<n; i++){
        if(a[i-1] != a[i]){
            cs.push_back(a[i]);
        }
    }
    // for(auto a : cs)cout<<a<<" "; cout<<nl;
    for(int i=0; i<sz(cs)-1; i++){
        if(mp[cs[i]]>mp[cs[i+1]]){
            cout<<"NO\n"; return;
        }
    }
    cout<<"YES\n";


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