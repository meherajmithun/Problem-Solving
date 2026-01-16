#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<char,int>a , pair<char,int>b){
    return a.second<b.second;
}

int main(){
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        string s; cin>>s;
        map<char,int>mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        vector<pair<char,int>>vp;
        for(auto u : mp) vp.push_back(u);
        sort(vp.begin() , vp.end(), cmp);
        char c = vp[0].first, b = vp[vp.size()-1].first;
        for(int i=0; i<n; i++){
            if(s[i] == c){
                s[i] = b;
                break;
            }
        }
        cout<<s<<endl;
    }
}