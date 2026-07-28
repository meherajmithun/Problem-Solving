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
#define print(x) cout<<x<<'\n'

void solve() {
    int n,query; cin>>n>>query;
    vector<int>v(n);
    int sum = 0,lastSum=0,store=-1;
    map<int,int>mp;
    for(int i=0; i<n; i++){
        cin>>v[i]; sum += v[i]; mp[i] = v[i];
    }
    while(query--){
        int t; cin>>t;
        if(t==1){
            int idx,val;
            cin>>idx>>val; idx--;
            if(!mp[idx]) mp[idx] = store;
            sum -= mp[idx];
            sum += val;
            mp[idx] = val;
        }
        else{
            int val; cin>>val;
            mp.clear();
            sum = (n*val); lastSum=sum; store=val;
        }
        cout<<sum<<nl;
    }
    
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