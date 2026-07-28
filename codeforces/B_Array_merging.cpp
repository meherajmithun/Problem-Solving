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
    vector<int>a(n),b(n);
    for(auto &u : a) cin>>u;   
    for(auto &u : b) cin>>u;
    vector<int>ans;
    for(auto u : a) ans.push_back(u);
    for(auto u : b) ans.push_back(u);
   // for(auto u : ans) cout<<u<<" "; cout<<nl;
    int cnt = 0,res=1;;
    for(int i=1; i<2*n; i++){
        cnt=1;
        if(ans[i] == ans[i-1]){
            while(ans[i-1] == ans[i]){
                i++;
                cnt++;
            }
            res = max(res,cnt);
        }
    }
    print(res);
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}