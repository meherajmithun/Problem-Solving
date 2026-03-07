#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int zero=0,one=0;
    for(auto a : s){
        if(a=='0') zero++;
        else one++;
    }
    if(one==0){
        cout<<"0\n"; return;
    }
    if(one<zero){
        cout<<"-1\n"; return;
    }
    if(zero==one){
        cout<<one<<'\n';
        for(int i=0; i<n; i++){
            if(s[i]=='1') cout<<i+1<<" ";
        }
        cout<<'\n';
        return;
    }
    cout<<zero<<'\n';
    for(int i=0; i<n; i++){
        if(s[i]=='0') cout<<i+1<<" ";
    }
    cout<<'\n';

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