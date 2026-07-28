#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        vector<ll>v(n);
        for(auto &u : v) cin>>u;
        if(n<=2){
            cout<<"-1"<<endl;
            continue;
        }
        else{
            sort(v.begin() , v.end());
            ll sum=0;
            for(auto u : v) sum+=u;
            ll mid = v[n/2]*2*n+1;
            if(sum >= mid) cout << 0 << endl;
            else cout << mid - sum << endl;
        }
    }
}