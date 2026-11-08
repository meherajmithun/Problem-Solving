#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll h;
    int n;
    cin>>h>>n;
    vector<ll>a(n),c(n);
    for(ll &x:a){
        cin>>x;
    }
    for(ll &x:c){
        cin>>x;
    }
    auto ok = [&](ll turns){
         ll damage =0;
         for(int i=0;i<n;i++){
             ll times = (turns - 1) / c[i] + 1;

             if(times >= (h-damage + a[i]-1 )/ a[i])
             return true;

            damage+= a[i] * times;

            
         }
         return false;
    };
    ll lo =1,hi = 4e18,mid;
    while(lo<hi){
        mid = lo+(hi-lo)/2;
        if(ok(mid))
            hi = mid;
        else
            lo = mid+1;
    }
    cout<<lo<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}