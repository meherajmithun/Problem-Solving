#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#define mod 1000000009
using namespace std;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    int n; cin >> n;
    vector<int>v(n);
    for(auto &u : v) cin >> u;

    map<int,int>mp;
    for(int i=0; i<n; i++){
        mp[v[i]]++;
    }
    int k = 0;
    for(auto u : mp){
        if(u.first == 0) continue;
        if(u.second % 2 == 1) k++;
    }
    int it = 0;
    for(auto u : mp){
        it += u.second/2;
    }
    if(it > 0) k++;
    cout<<k<<endl;

}

int main(){
    slow();
    int tc = 1; 
    cin >> tc;
    while(tc--){
        solve();
    }
}