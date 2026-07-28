#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n; cin>>n;
    vector<int>v(n+12),pre(n+12),suf(n+12);
    for(int i=1; i<=n; i++){
        cin>>v[i]; 
        pre[i] = __gcd(pre[i-1],v[i]);
    }
    for(int i=n; i>=1; i--){
        suf[i] = __gcd(suf[i+1] , v[i]);
    }
    int ans = INT_MIN;
    for(int i=1,j=n; i<=n;i++,j--){
        ans = max(__gcd(pre[i-1] , suf[i+1]) , ans);
    }
    cout<<ans<<endl;

}