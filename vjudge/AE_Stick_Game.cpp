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
    int n,k; cin>>n>>k;
    vector<int>v(k);
    for(auto &a : v) cin>>a;
    int ans[n+1] = {};
    ans[1]=0;
    for(int i=1; i<=n; i++){
        for(int j=0; j<k; j++){
            // cout<<i-v[j]<<" "<<ans[i-v[j]]<<nl;
            if(i-v[j]>=0 and ans[i-v[j]]==0){
                ans[i]=1;
                // cout<<"Dhukse";
            }

        }
    }
    for(int i=1; i<=n; i++){
        if(ans[i]) cout<<"W";
        else cout<<"L";
    }


}

int32_t main(){
    fast
    int tc = 1;// cin >> tc;
    while(tc--){
        solve();
    }
}