#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    int n; cin >> n;
    vector<ll>v(n);
    for(auto &u : v) cin >> u;
    ll suma = 0, sumb = 0;
    map<ll,int>mp;
    mp[0] = 1;
    for(int i =0; i<n; i++){
        if(i % 2 == 0) suma += v[i];
        else sumb += v[i];
        if(mp[(suma-sumb)]){
            cout<<"YES"<<endl;
            return;
        }
        mp[suma-sumb]++;
    }
    cout<<"NO"<<endl;
}

int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}