#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;
 
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define int long long
 
void solve(){
    int n,query; cin>>n>>query;
    vector<int>v(n);
    o_set<pair<int,int>>choto;
    for(auto &u : v) cin>>u;
    int i=0;
    for(auto u : v){
        choto.insert({u,i});
        i++;
    }
    while(query--){
        char c ; cin>>c;
        if(c == '!'){
            int k,x; cin>>k>>x; k--;
            int a = v[k];
            choto.erase({a,k});
            v[k]=x;
            choto.insert({x,k}); 
        }
        else{
            int a,b; cin>>a>>b;
            int k = choto.order_of_key({a,-1});
            int l = choto.order_of_key({b+1,-1});
            // cout<<k<<" "<<l<<'\n';
            int t = n-l;
            // ans += (t-k);
            int ans = t-k;
            if(ans<0) ans = 0;
            cout<<l-k<<'\n';
        }
    }
}
 
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int tc = 1; //cin>>tc;
    while(tc--){
        solve();
    }
}
