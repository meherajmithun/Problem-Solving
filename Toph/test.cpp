#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    map<char,int>mp;
    for(int i=0; i<(int)s.size(); i++){
        mp[s[i]]++;
    }
    for(auto u : mp) cout<<u.first<<" "<<u.second<<'\n';
}
