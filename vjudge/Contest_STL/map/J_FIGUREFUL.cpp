#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<pair<int,int>,string>mp;
    while(n--){
        int a,b;
        cin >> a >> b;
        //a = a+b;
        string s; cin >> s;
        mp[{a,b}] = s;
    }
    int query; cin >> query;
    while(query--){
        int a,b ; cin >> a >> b;
        //a = a+b;
        if(mp.count({a,b})){
            cout<<mp[{a,b}]<<endl;
        }
    }
}