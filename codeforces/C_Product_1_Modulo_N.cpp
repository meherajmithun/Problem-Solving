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
    set<int>st;
    int val = 1;
    for(int i=1; i<n; i++){
        int a = __gcd(n,i);
        if(a!=1) continue;
        val = (val*i)%n;
        st.insert(i);
    }   
    if(val!=1) st.erase(val);

    cout<<sz(st)<<nl;
    for(auto a : st) cout<<a<<" "; cout<<nl;


}

int32_t main(){
    fast
    int tc=1;
    // cin >> tc;
    int C = 1;
    while(tc--){
        // cout << "Case " << C++ << ": ";
        solve();
    }
}