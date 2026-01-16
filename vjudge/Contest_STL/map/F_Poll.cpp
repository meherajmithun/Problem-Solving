#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int mx = INT_MIN;
    map<string,int>mp;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        mp[s]++;
        if(mp[s] >= mx){
            mx = mp[s];
        }
    }
    for(auto u : mp){
        if(u.second == mx){
            cout<<u.first<<endl;
        }
    }
}