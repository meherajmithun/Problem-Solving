#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    for(int i=1; i<=n; i++){
        if(k>i){
            k -= i;
        }
        else{
            cout<<v[k-1];
            return 0 ;
        }
    }
}