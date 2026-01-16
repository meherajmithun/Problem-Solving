#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    string s; cin>>s;
    ll n = s.size();
    if(s[0] != '1'){
        cout<<"NO"<<endl;
        return;
    }
    if(s[n-1] == '9'){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0; i<n-1; i++){
        if(s[i] == '0'){
            cout<<"NO"<<'\n';
            return;
        }
    }
    cout<<"YES"<<'\n';
}

int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}