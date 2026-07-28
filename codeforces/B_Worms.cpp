#include<bits/stdc++.h>
using namespace std;
#define int long long
#define print(x) cout<<x<<'\n'

int32_t main(){
    int n; cin>>n;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++){
        int a; cin>>a;
        v[i]= v[i-1] + a; 
    }
    // for(auto u : v) cout<<u<<" ";
    int query; cin>>query;
    while(query--){
        int a; cin>>a;
        int lb = lower_bound(v.begin() , v.end() , a)-v.begin();

        cout<<lb<<endl;
    }

}