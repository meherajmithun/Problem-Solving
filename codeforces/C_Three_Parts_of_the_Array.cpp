#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    int l=0,r=n-1;
    int ans = 0;
    int s1=0,s2=0;
    while(l<=r){
        if(s1<s2){
            s1 += v[l]; l++;
        }
        else{
            s2 += v[r]; r--;
        }
        if(s1==s2) ans = s1;
        // cout<<l<<" "<<r<<" "<<s1<<" "<<s2<<endl;
    }
    cout<<ans<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    while(tc--){
        solve();
    }
    return 0;
}