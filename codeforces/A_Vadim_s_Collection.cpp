#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin>>tc;
    while(tc--){
        string s; cin>>s;
        vector<int>v;
        for(int i=0; i<(int)s.size(); i++){
            v.push_back(s[i]-'0');
        }
        sort(v.begin() , v.end());
        for(int i=9; i>=0; i--){
            auto it = lower_bound(v.begin() , v.end() , i);
            cout<<*it;
            if(it != v.end()){
                v.erase(it);
            }
        }
        cout<<endl;
    }
}