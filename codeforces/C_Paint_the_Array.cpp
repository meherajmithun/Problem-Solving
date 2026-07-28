#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int gcd1=0,gcd2=0;
    for(int i=0; i<n; i++){
        if(i&1){
            gcd1 = __gcd(gcd1,v[i]);
        }
        else{
            gcd2 = __gcd(gcd2,v[i]);
        }
    }
    bool f = true;
    for(int i=1; i<n; i+=2){
        if(v[i]%gcd2 == 0){
            f = false;
            break;
        }
    }
    if(f){
        cout<<gcd2<<endl;
        return;
    }
    f = true;
    for(int i=0; i<n; i+=2){
        if(v[i]%gcd1 == 0){
            f = false;
            break;
        }
    }
    if(f){
        cout<<gcd1<<endl;
        return;
    }

    cout<<0<<endl;

}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}