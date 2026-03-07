// IN THE NAME OF ALLAH
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    stack<int>st;
    st.push(v[n-1]);
    map<int,int>mp;
    for(int i=n-2; i>=0; i--){
        int t = v[i]; t++;
        // cout<<t<<" ";
        while(1){
            int t2 = st.top();
            if(t==t2) st.pop();
            else break;
            if(st.empty()) break;
            // cout<<t2<<" -> ";
            // st.pop();
        }
        // cout<<nl;
        st.push(v[i]);
        // cout<<v[i]<<" -> "<<sz(st)<<nl;
    }   
    cout<<sz(st)<<nl;
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