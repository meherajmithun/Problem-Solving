#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        int lagbe = ((n+1)/2)-1;
        vector<int>v(n);
        for(auto &u : v) cin>>u;
        for(int i=0; i<n; i++){
            if(v[i] < 0) v[i] *= -1;
        }
        int cnt1 = 0 , cnt2 = 0;
        for(int i=1; i<n; i++){
            if(v[i] < v[0]) cnt1++;
            else cnt2++;
        }
        if(cnt2 >= lagbe) cout<<"YES\n";
        else cout<<"NO\n";
    }
}