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

void solve() {
    int n,x; cin>>n>>x;
    vector<int>a(n),h(n);
    for(auto &u : a) cin>>u;
    for(auto &u : h) cin>>u;
    int sum=0,ans=0,l=0,r=0;
    while(r<n){
        if(r>0 and h[r-1]%h[r] != 0){
            l = r;
            sum = 0;
        }
        sum += a[r];
        while(sum>x and l<=r){
            sum -= a[l];
            l++;
        }
        ans = max(ans,r-l+1);
        r++;
    }   
    print(ans);
}

int32_t main() {
    fast
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}