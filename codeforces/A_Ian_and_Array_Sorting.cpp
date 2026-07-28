#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        vector<int>v(n);
        for(auto &u : v) cin>>u;
        if(n%2 != 0) {
            cout<<"YES"<<'\n';
        }
        else{
            for(int i=1; i<n-1; i++){
                int t = v[i-1]-v[i];
                v[i] += t;
                v[i+1] += t;
            }
            if(v[n-1] >= v[n-2]) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
 
    }
}