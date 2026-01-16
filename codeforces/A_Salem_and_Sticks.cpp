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
    int ans = INT_MAX, T=INT_MAX;
    for(int t=1; t<=100; t++){
        int cost = 0;
        for(int i=0; i<n; i++){
            if(abs(t-v[i])<2) continue;
            // if(t==3) cout<<abs(abs(v[i]-t)-1)<<" ";
            cost += abs(abs(v[i]-t)-1);
        }
        if(cost<ans){
            ans = cost; T = t;
        }
    }
    cout<<T<<" "<<ans;
}

int32_t main(){
    fast
    int tc=1;
    // cin >> tc;
    while(tc--){
        solve();
    }
}