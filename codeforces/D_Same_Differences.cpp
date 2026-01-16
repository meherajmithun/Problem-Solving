#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        vector<int>v(n);
        for(auto &u : v) cin>>u;
        map<int,int>mp;
        int ans = 0;
        for(int i=0; i<n; i++){
            v[i] = v[i]-i;
            ans += mp[v[i]];
            mp[v[i]]++;
        }
        cout<<ans<<endl;

    }
}