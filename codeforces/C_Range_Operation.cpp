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
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    vector<int>pre(n+1, 0);
    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1]+v[i-1];
    }   

    // for(auto a : pre) cout<<a<<" "; cout<<nl;

    int s=pre[n],ans=s;
    int k = LLONG_MIN;
    int l=0,r=1;
    while(r<=n){
        l=r;
        int tmp = pre[l-1]-(l*l)+l;
        k = max(k,tmp);
        int lagbe = r*r + r - pre[r];
        int paisi = lagbe + k;
        // cout<<paisi<<" ";
        ans = max(ans,s+paisi);
        r++;
        // cout<<s+paisi<<" ";
    }
    cout<<ans<<nl;

}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}