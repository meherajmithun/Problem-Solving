#include<bits/stdc++.h>
using namespace std;

void solve(){

    int lo=1,hi=1e6;
    int ans;
    while(lo<hi){
        int mid = (lo+hi)>>1;
        cout<<mid<<'\n';
        cout.flush();

        string ask; cin>>ask;
        if(ask=="<"){
            hi = mid-1;
        }
        else{
            lo = mid+1;
            ans = mid;
        }
    }
    cout<<"! "<<ans<<'\n'; //cout.flush();

}



int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);

    int tc=1; //cin>>tc;
    while(tc--){
        solve();
    }

}