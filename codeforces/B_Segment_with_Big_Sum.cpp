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
    int n,s; cin>>n>>s;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int sum=0,l=0,r=0;
    int ans = LLONG_MAX;
    while(r<n){
        sum += v[r];
        if(sum>s){
            while(l<=r and sum>s){
                sum -= v[l];
                ans = min(ans,r-l+1);
                l++;
            }
            
        }
        r++;
    }
    if(ans == LLONG_MAX) ans = -1;
    print(ans);
}

int32_t main(){
    fast
    int tc=1;// cin >> tc;
    while(tc--){
        solve();
    }
}