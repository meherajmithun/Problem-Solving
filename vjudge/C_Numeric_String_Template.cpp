#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    int m; cin>>m;
    while(m--){
        string s; cin>>s;
        int sz = (int)s.size();
        if(sz!=n){
            cout<<"NO"<<endl; continue;
        }
        bool bl=0;
        for(int i=0; i<n; i++){
            if(((s[i]==s[n-i-1]) and (v[i]!=v[n-i-1])) or (s[i]!=s[n-i-1]) and (v[i]==v[n-i-1])){
                cout<<"NO"<<endl;
                bl=1; break;
            }
        }
        if(bl==0) cout<<"YES"<<endl; 
    }
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