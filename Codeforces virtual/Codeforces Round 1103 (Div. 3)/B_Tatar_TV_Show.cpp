#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    if(n==1){
        if(s[0]=='0') cout<<"YES\n";
        else cout<<"NO\n";
        return;
    }
    for(int i=0; i<(n-k); i++){
        if(s[i]=='1'){
            s[i] = '0';
            if(s[i+k]=='0') s[i+k]='1';
            else s[i+k]='0';
        }
    }
    // cout<<s<<endl;
    for(auto c : s){
        if(c=='1') {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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