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

bool check(int k, int n, int h,vector<int>v){
    int sum = 0;
    for(int i=0; i<n-1; i++){
        sum += min(v[i+1]-v[i], k);
    }
    sum += k;
    // cout<<" -> "<<sum<<nl;
    if(sum>=h) return 1;
    return 0;
}

void solve() {
    int n,h; cin>>n>>h;
    vector<int>v(n);
    for(auto &a : v) cin>>a;

    int lo=0,hi=h;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        // cout<<hi<<" "<<lo<<" "<<mid;
        if(check(mid,n,h,v)){
            hi = mid-1;
        }
        else lo = mid+1;
    }
    cout<<lo<<nl;
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