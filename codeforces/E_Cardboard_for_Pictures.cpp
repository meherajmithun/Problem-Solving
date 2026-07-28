#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int tc; cin>>tc;
    while(tc--){
        int n,c; cin>>n>>c;
        vector<int>v(n);
        for(auto &u : v) cin>>u;
        int l = 1,r=1e9;
        while(l<=r){
            int mid = (l+r)/2;
            int ans = 0;
            for(int i=0; i<n; i++){
                ans += (v[i]+mid*2)*(v[i]+mid*2);
                if(ans>c) break;
            }
            if(ans == c) {
                cout<<mid<<endl;
                break;
            }
            if(ans>c){
                r = mid-1;
            }
            else {
                l = mid+1;
            }
        }
    }
}