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
    for(auto &u : v) cin>>u;
    vector<int>ans;
    ans.push_back(1);
    int last = 1;
    for(int i=1; i<n; i++){
        int dif = v[i]-v[i-1];
        if(dif>sz(ans)){
            last++;
            ans.push_back(last);
        }
        else{
            ans.push_back(ans[sz(ans)-dif]);
        }
    }   
    for(auto u : ans) cout<<u<<" "; cout<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}