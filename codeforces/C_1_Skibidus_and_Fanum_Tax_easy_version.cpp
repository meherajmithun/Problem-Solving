#include<bits/stdc++.h>
using namespace std;
#define int long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

void solve(){
    int n,m; cin>>n>>m;
    vector<int>a(n),b(m);
    for(auto &i : a) cin>>i;
    for(auto &u : b) cin>>u;
    sort(b.begin(),b.end());

    int k = -1000000000;
    for(int i=0; i<n; i++){
        int x = INT_MAX;
        if(a[i]>=k) x = a[i];
        auto it = lower_bound(b.begin(),b.end(), k+a[i]);
        // cout<<*it<<" ";
        if(it != b.end()){
            x = min(x,*it - a[i]);
        }
        if(x == INT_MAX){
            cout<<"NO\n"; return;
        }
        // cout<<k<<" ";
        k=x;
    }
    cout<<"YES\n";
}

int32_t main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}