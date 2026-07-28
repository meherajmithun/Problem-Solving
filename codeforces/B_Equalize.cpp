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

bool check(int &mx,vector<int>v, int mid){
    int cnt = 1, n=sz(v);
    for(int i=1; i<n; i++){
        if((v[i]-v[0])<=mid) cnt++;
    }
    if(mx<cnt) {mx = cnt; return 1;}
    return 0;
}

void solve() {
    int n; cin>>n;
    vector<int>v(n),per(n);
    for(auto &a : v) cin>>a;
    map<int,int>mp;
    for(auto a : v) mp[a]++;
    int mx = 0;
    for(auto [a,b] : mp) mx = max(mx,b);

    int hi=n,lo=0;
    sort(all(v));

    // for(auto a : v) cout<<a<<" "; cout<<nl;
    
    while(lo<=hi){
        int mid = (lo+hi)/2;
        cout<<mid<<" "<<hi<<" "<<lo<<nl;
        if(check(mx,v,mid)){
            lo = mid+1;
        }
        else hi = mid-1;
    }
    cout<<lo<<" "<<mx<<nl;
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