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
    vector<int>v(n),pre(n+1);
    for(auto &a : v) cin>>a;
    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1]+v[i-1];
    }
    // for(auto a : pre) cout<<a<<" "; cout<<nl;
    string s; cin>>s;
    int ans = 0;
    int l=-1,r=n;
    while(l<r){
        int a=0,b=0;
        for(int i=l+1; i<r; i++){
            if(s[i]=='L'){
                l=i;a=1; break;
            }
        }
        for(int i=r-1; i>l; i--){
            if(s[i]=='R'){
                r=i; b=1; break;
            }
        }
        if(a and b) ans += (pre[r+1]-pre[l]);
        else break;
        // cout<<ans<<nl;
        // r--;l++;
    }
    print(ans);

}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}