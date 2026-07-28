#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    int mn = LLONG_MAX,idx = 0;

    for(int i=0; i<n; i++){
        cin>>v[i];
        if(mn>v[i]){
            idx = i;
            mn = v[i];
        }
    }
    //for(auto u : v) cout<<u<<" "; cout<<endl;
    int gcd = 0;
    for(int i=0; i<n; i++){
        if(i != idx and v[i]%v[idx] == 0){
            gcd = __gcd(gcd,v[i]);
            //cout<<gcd<<" ";
        }
    }
    if(gcd == v[idx]) cout<<"YES\n";
    else cout<<"NO\n";
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}