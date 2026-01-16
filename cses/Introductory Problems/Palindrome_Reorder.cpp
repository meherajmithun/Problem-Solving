#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s; cin>>s;
    int n = s.size();
    map<char,int>mp;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }
    int cnt = 0;
    for(auto u : mp){
        if(u.second%2 != 0) cnt++;
    }
    if(cnt > 1){
        cout<<"NO SOLUTION";
        return 0;
    }
    vector<char>v(n);
    int l=0,r=n-1;
    for(int i=0; i<n; i++){
        if(mp[s[i]]%2 != 0){
            v[n/2] = s[i];
            mp[s[i]]--;
        }
        while(mp[s[i]] > 0){
            v[l] = s[i];
            v[r] = s[i];
            mp[s[i]]--;
            mp[s[i]]--;
            l++,r--;
        }
    }
    for(auto u : v) cout<<u;
}