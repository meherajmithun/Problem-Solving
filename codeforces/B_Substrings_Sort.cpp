#include<bits/stdc++.h>
using namespace std;
//#define int long long

int32_t main(){
    int n; cin>>n;
    vector<pair<int,string>>cs;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        cs.push_back({s.size() , s});
    }
    sort(cs.begin() , cs.end());
    string t = cs[n-1].second;
    bool gese = true;
    for(int i=0; i<n-1; i++){
        string t2 = cs[i].second;
        t = cs[i+1].second;
        if(t.find(t2) != -1){

        }
        else{
            gese = false;
        }
    }
    if(!gese){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(auto u : cs){
            cout<<u.second<<endl;
        }
    }
}
