// IN THE NAME OF ALLAH
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
string s,t; 
int n;
vector<int>v;

bool check(int mid){
    vector<int>visited(n+1,0);
    for(int i=0; i<mid; i++){
        visited[v[i]-1] = 1; 
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(!visited[i] and t[cnt]==s[i]) cnt++;
        if(cnt==sz(t)) return 1;
    }
    return 0;
}
void solve() {
    cin>>s>>t;
    n = sz(s);
    v.resize(n);
    for(auto &a : v) cin>>a;
    int lo=0,hi=n;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(check(mid)){
            lo = mid+1;
        } 
        else hi = mid-1;
        // cout<<mid<<" "<<lo<<" "<<hi<<nl;
    }
    cout<<hi<<nl;
}

int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}