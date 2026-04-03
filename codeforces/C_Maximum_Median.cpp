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

bool check(int k,int mid,int n,vector<int>v){
    int t = n/2;
    int operation=0;
    for(int i=t; i<n; i++){
        if(v[i]<mid) operation += (mid-v[i]);
    }
    // cout<<mid<<" "<<operation<<" -> ";
    if(k>=operation) return 1;
    return 0;
}


void solve() {
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    sort(all(v));

    int hi=2e9,lo=0;
    while(lo<=hi){
        int mid = (hi+lo)/2;
        if(!check(k,mid,n,v)){
            hi = mid-1;
        }
        else lo = mid+1;
        // cout<<mid<<" "<<hi<<" "<<lo<<nl;
    }
    cout<<lo-1<<nl;
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